package com.firebase.client;

import org.junit.runner.JUnitCore;

import ca.thurn.gwt.SharedGWTTestCase;

class FirebaseTest extends SharedGWTTestCase {

  public static void runTests() {
    JUnitCore.main("FCFirebaseTest");
  }

  static class TestChildEventListener implements ChildEventListener {

    @Override
    public void onCancelled() {
      fail("unexpected cancellation");
    }

    @Override
    public void onChildAdded(DataSnapshot snapshot, String previousChildName) {
    }

    @Override
    public void onChildChanged(DataSnapshot snapshot, String previousChildName) {
    }

    @Override
    public void onChildMoved(DataSnapshot snapshot, String previousChildName) {
    }

    @Override
    public void onChildRemoved(DataSnapshot snapshot) {
    }

  }

  static abstract class TestValueEventListener implements ValueEventListener {
    @Override
    public void onCancelled() {
      fail("Unexpected cancellation");
    }
  }

  @Override
  protected void setUp() throws Exception {
    super.setUp();
  }

  public void testGetName() {
    Firebase firebase = new Firebase("http://www.example.com/foo");
    assertEquals("foo", firebase.getName());
  }

  public void testSetBoolean() {
    runTestSet(true);
  }

  private String randomName() {
    return Math.abs(randomInteger()) + "";
  }
  
  private Firebase makeFirebase() {
    return new Firebase("http://www.example.com/" + randomName());
  }
  
  private void runTestSet(Object object) {
    runTestSet(object, object);
  }

  private void runTestSet(Object object, Object expected) {
    runTestSetOnce(object, null, expected);
    runTestSetOnce(object, "string", expected);
    runTestSetOnce(object, 123.2, expected);
  }

  private void runTestSetOnce(final Object object, final Object priority, final Object expected) {
    beginAsyncTestBlock();
    final Firebase child = makeFirebase();
    child.addListenerForSingleValueEvent(new TestValueEventListener() {
      @Override
      public void onDataChange(DataSnapshot snapshot) {
        assertDeepEquals("values do not match", expected, snapshot.getValue());
        assertEquals(child.getName(), snapshot.getName());
        assertEquals("priorities do not match", priority, snapshot.getPriority());
        assertEquals(child.getName(), snapshot.getRef().getName());
        finished();
      }
    });
    if (priority == null) {
      child.setValue(object);
    } else {
      child.setValue(object, priority);
    }
    endAsyncTestBlock();
  }

}

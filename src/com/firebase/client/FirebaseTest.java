package com.firebase.client;

import org.junit.runner.JUnitCore;

import ca.thurn.gwt.SharedGWTTestCase;

class FirebaseTest extends SharedGWTTestCase {

  Firebase firebase;
  
  public static void runTests() {
    JUnitCore.main("FCFirebaseTest");
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
    firebase = new Firebase("https://www.example.com");
  }

  public void testGetName() {
    Firebase firebase = new Firebase("http://www.example.com/foo");
    assertEquals("foo", firebase.getName());
  }

  public void testSetValue() {
    beginAsyncTestBlock();
    final Firebase child = new Firebase("http://www.example.com/bar");
    child.addValueEventListener(new TestValueEventListener() {
      @Override
      public void onDataChange(DataSnapshot snapshot) {
        assertDeepEquals("values do not match", "object", snapshot.getValue());
        finished();
      }
    });
    child.setValue("object");
    endAsyncTestBlock();
  }

}

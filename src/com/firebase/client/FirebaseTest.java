package com.firebase.client;

import junit.framework.TestCase;
import org.junit.runner.JUnitCore;

class FirebaseTest extends TestCase {

  Firebase firebase;
  
  public static void runTests() {
    JUnitCore.main("FCFirebaseTest");
  }
  
  @Override
  protected void setUp() throws Exception {
    super.setUp();
    firebase = new Firebase("https://www.example.com");
  }
  
  public void testFoo() {
    assertEquals(3, 2 + 2);
  }

}

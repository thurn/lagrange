package com.firebase.client;

public class Query {

  private final Object firebase;

  public Query(Object firebase) {
    this.firebase = firebase;
  }
  
  public void helloWorld() {
    System.out.println("Hello, world!");
  }

}

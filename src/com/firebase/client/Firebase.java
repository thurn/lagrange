package com.firebase.client;

public class Firebase extends Query {

  public Firebase(String url) {
    super(createFirebase(url));
  }

  public static native Object createFirebase(String url) /*-[
    return [[Firebase alloc] initWithUrl: url];
  ]-*/;

}

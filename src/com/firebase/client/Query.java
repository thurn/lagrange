package com.firebase.client;

/*-[
#import <Firebase/Firebase.h>
#import "DataSnapshot.h"
#import "WrappedValueEventListener.h"
]-*/

public class Query {

  final Object firebase;

  public Query(Object firebase) {
    this.firebase = firebase;
  }
  
  public void helloWorld() {
    System.out.println("Hello, world!");
  }
  
  public native ValueEventListener addValueEventListener(ValueEventListener listener) /*-[
    Firebase *firebase = self->firebase_;
    FirebaseHandle handle = [firebase observeEventType:FEventTypeValue withBlock:^(FDataSnapshot *snapshot) {
      FCDataSnapshot *javaSnapshot = [[FCDataSnapshot alloc] initWithId: snapshot]; 
      [listener onDataChangeWithFCDataSnapshot: javaSnapshot];
    }];
    id<FCValueEventListener> result = [[FCWrappedValueEventListener alloc] initWithLong: handle];
    return result;
  ]-*/;

}

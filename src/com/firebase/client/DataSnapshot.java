package com.firebase.client;

import java.util.List;
import java.util.Map;

/*-[
#import <Firebase/Firebase.h>
#include "java/util/HashMap.h"
#include "java/util/ArrayList.h"
]-*/

public class DataSnapshot {
  
  final Object snapshot;
  
  DataSnapshot(Object snapshot) {
    this.snapshot = snapshot;
  }
  
  static native Map<String, Object> convertNsDictionaryToMap(Object dictionary) /*-[
    id<JavaUtilMap> result = [[JavaUtilHashMap alloc] init];
      for (id key in dictionary) {
        [result putWithId: key withId: [dictionary objectForKey: key]];
      }
    return result;
  ]-*/;
  
  static native List<Object> convertNsArrayToList(Object array) /*-[
    id<JavaUtilList> result = [[JavaUtilArrayList alloc] init];
      for (id value in array) {
        [result addWithId: value];
      }
    return result;
  ]-*/;
  
  public native Object getValue() /*-[
    FDataSnapshot *snapshot = self->snapshot_;
    return snapshot.value;
  ]-*/;

}

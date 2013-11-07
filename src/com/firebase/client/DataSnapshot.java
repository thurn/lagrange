package com.firebase.client;

import java.util.List;
import java.util.Map;

/*-[
#import <Firebase/Firebase.h>
#include "java/util/HashMap.h"
#include "java/util/ArrayList.h"
#include "java/lang/Long.h"
#include "java/lang/Double.h"
#include "java/lang/Boolean.h"
#include "java/lang/IllegalStateException.h"
]-*/

public class DataSnapshot {
  
  final Object snapshot;
  
  private static final int TYPE_UNKNOWN = 0;
  private static final int TYPE_NULL = 1;
  private static final int TYPE_LONG = 2;
  private static final int TYPE_DOUBLE = 3;
  private static final int TYPE_BOOLEAN = 4;
  private static final int TYPE_STRING = 5;
  private static final int TYPE_LIST = 6;
  private static final int TYPE_MAP = 7;
  
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
    id value = snapshot.value;
    if (value == nil || [value isKindOfClass: [NSNull class]]) {
      return nil;
    } else if ([value isKindOfClass: [NSNumber class]]) {
      NSNumber *number = value;
      if (strcmp([value objCType], @encode(BOOL)) == 0) {
        return [[JavaLangBoolean alloc] initWithBoolean: [number boolValue]];
      }
      if ([number longLongValue] == [number doubleValue]) {
        return [[JavaLangLong alloc] initWithLong: [number longLongValue]];
      }
      return [[JavaLangDouble alloc] initWithDouble: [number doubleValue]];
    } else if ([value isKindOfClass: [NSString class]]) {
      return value;
    } else if ([value isKindOfClass: [NSArray class]]) {
      return [FCDataSnapshot convertNsArrayToListWithId: value];
    } else if ([value isKindOfClass: [NSDictionary class]]) {
      return [FCDataSnapshot convertNsDictionaryToMapWithId: value];
    } else {
      @throw [[JavaLangIllegalStateException alloc] initWithNSString:@"Unknown type returned from getValue()"];
    }
  ]-*/;
  
  public native Firebase getRef() /*-[
    FDataSnapshot *snapshot = self->snapshot_;
    return [[FCFirebase alloc] initWithId: snapshot];
  ]-*/;
  
  public native Object getPriority() /*-[
    FDataSnapshot *snapshot = self->snapshot_;
    id value = snapshot.priority;
    if (value == nil || [value isKindOfClass: [NSNull class]]) {
      return nil;
    } else if ([value isKindOfClass: [NSNumber class]]) {
      NSNumber *number = value;
      if ([number longLongValue] == [number doubleValue]) {
        return [[JavaLangLong alloc] initWithLong: [number longLongValue]];
      }
      return [[JavaLangDouble alloc] initWithDouble: [number doubleValue]];
    } else if ([value isKindOfClass: [NSString class]]) {
      return value;
    } else {
      @throw [[JavaLangIllegalStateException alloc] initWithNSString:@"Unknown type returned from getPriority()"];
    }
  ]-*/;
  
  public native String getName() /*-[
    FDataSnapshot *snapshot = self->snapshot_;
    return snapshot.name;
  ]-*/;

}

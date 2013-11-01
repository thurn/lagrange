//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/util/Vector.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilVector_H_
#define _JavaUtilVector_H_

@class IOSObjectArray;
@protocol JavaUtilCollection;

#import "JreEmulation.h"
#include "java/io/Serializable.h"
#include "java/util/AbstractList.h"
#include "java/util/Enumeration.h"
#include "java/util/List.h"
#include "java/util/RandomAccess.h"

#define JavaUtilVector_DEFAULT_SIZE 10
#define JavaUtilVector_serialVersionUID -2767605614048989439

@interface JavaUtilVector : JavaUtilAbstractList < JavaUtilList, JavaUtilRandomAccess, NSCopying, JavaIoSerializable > {
 @public
  int elementCount_;
  IOSObjectArray *elementData_;
  int capacityIncrement_;
}

- (id)init;
- (id)initWithInt:(int)capacity;
- (id)initWithInt:(int)capacity
          withInt:(int)capacityIncrement;
- (id)initWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (IOSObjectArray *)newElementArrayWithInt:(int)size OBJC_METHOD_FAMILY_NONE;
- (void)addWithInt:(int)location
            withId:(id)object;
- (BOOL)addWithId:(id)object;
- (BOOL)addAllWithInt:(int)location
withJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (BOOL)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (void)addElementWithId:(id)object;
- (int)capacity;
- (void)clear;
- (id)clone;
- (BOOL)containsWithId:(id)object;
- (BOOL)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (void)copyIntoWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;
- (id)elementAtWithInt:(int)location;
- (id<JavaUtilEnumeration>)elements;
- (void)ensureCapacityWithInt:(int)minimumCapacity;
- (BOOL)isEqual:(id)object;
- (id)firstElement;
- (id)getWithInt:(int)location;
- (void)growWithInt:(int)newCapacity;
- (void)growByOne;
- (void)growByWithInt:(int)required;
- (NSUInteger)hash;
- (int)indexOfWithId:(id)object;
- (int)indexOfWithId:(id)object
             withInt:(int)location;
- (void)insertElementAtWithId:(id)object
                      withInt:(int)location;
- (BOOL)isEmpty;
- (id)lastElement;
- (int)lastIndexOfWithId:(id)object;
- (int)lastIndexOfWithId:(id)object
                 withInt:(int)location;
- (id)removeWithInt:(int)location;
- (BOOL)removeWithId:(id)object;
- (BOOL)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (void)removeAllElements;
- (BOOL)removeElementWithId:(id)object;
- (void)removeElementAtWithInt:(int)location;
- (void)removeRangeWithInt:(int)start
                   withInt:(int)end;
- (BOOL)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;
- (id)setWithInt:(int)location
          withId:(id)object;
- (void)setElementAtWithId:(id)object
                   withInt:(int)location;
- (void)setSizeWithInt:(int)length;
- (int)size;
- (id<JavaUtilList>)subListWithInt:(int)start
                           withInt:(int)end;
- (IOSObjectArray *)toArray;
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)contents;
- (NSString *)description;
- (void)trimToSize;
- (id)copyWithZone:(NSZone *)zone;
- (void)copyAllFieldsTo:(JavaUtilVector *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilVector, elementData_, IOSObjectArray *)

@interface JavaUtilVector_$1 : NSObject < JavaUtilEnumeration > {
 @public
  JavaUtilVector *this$0_;
  int pos_;
}

- (BOOL)hasMoreElements;
- (id)nextElement;
- (id)initWithJavaUtilVector:(JavaUtilVector *)outer$;
- (void)copyAllFieldsTo:(JavaUtilVector_$1 *)other;
@end

J2OBJC_FIELD_SETTER(JavaUtilVector_$1, this$0_, JavaUtilVector *)

#endif // _JavaUtilVector_H_

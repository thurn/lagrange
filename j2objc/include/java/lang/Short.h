//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/luni/src/main/java/java/lang/Short.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangShort_H_
#define _JavaLangShort_H_

@class IOSClass;
@class IOSObjectArray;

#import "JreEmulation.h"
#include "java/lang/Comparable.h"

#define JavaLangShort_MAX_VALUE 32767
#define JavaLangShort_MIN_VALUE -32768
#define JavaLangShort_SIZE 16

@interface JavaLangShort : NSNumber < JavaLangComparable > {
 @public
  short int value_;
}

+ (short int)MAX_VALUE;
+ (short int)MIN_VALUE;
+ (int)SIZE;
+ (IOSClass *)TYPE;
- (id)initWithNSString:(NSString *)string;
- (id)initWithShort:(short int)value;
- (char)byteValue;
- (int)compareToWithId:(JavaLangShort *)object;
+ (JavaLangShort *)decodeWithNSString:(NSString *)string;
- (double)doubleValue;
- (BOOL)isEqual:(id)object;
- (float)floatValue;
- (NSUInteger)hash;
- (int)intValue;
- (long long int)longLongValue;
+ (short int)parseShortWithNSString:(NSString *)string;
+ (short int)parseShortWithNSString:(NSString *)string
                            withInt:(int)radix;
- (short int)shortValue;
- (NSString *)description;
+ (NSString *)toStringWithShort:(short int)value;
+ (JavaLangShort *)valueOfWithNSString:(NSString *)string;
+ (JavaLangShort *)valueOfWithNSString:(NSString *)string
                               withInt:(int)radix;
+ (short int)reverseBytesWithShort:(short int)s;
+ (JavaLangShort *)valueOfWithShort:(short int)s;
- (void)copyAllFieldsTo:(JavaLangShort *)other;
@end

BOXED_INC_AND_DEC(Short, shortValue, JavaLangShort)

@interface JavaLangShort_valueOfCache : NSObject {
}

+ (IOSObjectArray *)CACHE;
- (id)init;
@end

#endif // _JavaLangShort_H_

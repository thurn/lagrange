//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/IOSCharset.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaNioCharsetIOSCharset_H_
#define _JavaNioCharsetIOSCharset_H_

@class IOSObjectArray;
@class JavaNioCharsetCharsetDecoder;
@class JavaNioCharsetCharsetEncoder;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

#import "JreEmulation.h"
#include "java/nio/charset/Charset.h"

@interface JavaNioCharsetIOSCharset : JavaNioCharsetCharset {
 @public
  long long int nsEncoding__;
  float charBytes_;
}

+ (id<JavaUtilMap>)encodings;
+ (void)setEncodings:(id<JavaUtilMap>)encodings;
+ (void)addEncodingWithLong:(long long int)encoding
               withNSString:(NSString *)name
          withNSStringArray:(IOSObjectArray *)aliases
                  withFloat:(float)charBytes;
- (id)initWithLong:(long long int)nsEncoding
      withNSString:(NSString *)canonicalName
 withNSStringArray:(IOSObjectArray *)aliases
         withFloat:(float)charBytes;
- (long long int)nsEncoding;
- (BOOL)containsWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)charset;
- (JavaNioCharsetCharsetEncoder *)newEncoder OBJC_METHOD_FAMILY_NONE;
- (JavaNioCharsetCharsetDecoder *)newDecoder OBJC_METHOD_FAMILY_NONE;
+ (id<JavaUtilSet>)getAvailableCharsetNames;
+ (JavaNioCharsetCharset *)charsetForNameWithNSString:(NSString *)charsetName;
- (void)copyAllFieldsTo:(JavaNioCharsetIOSCharset *)other;
@end

#endif // _JavaNioCharsetIOSCharset_H_

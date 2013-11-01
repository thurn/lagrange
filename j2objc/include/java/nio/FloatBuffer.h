//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/FloatBuffer.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaNioFloatBuffer_H_
#define _JavaNioFloatBuffer_H_

@class IOSFloatArray;
@class JavaNioByteOrder;

#import "JreEmulation.h"
#include "java/lang/Comparable.h"
#include "java/nio/Buffer.h"

@interface JavaNioFloatBuffer : JavaNioBuffer < JavaLangComparable > {
}

+ (JavaNioFloatBuffer *)allocateWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioFloatBuffer *)wrapWithFloatArray:(IOSFloatArray *)array;
+ (JavaNioFloatBuffer *)wrapWithFloatArray:(IOSFloatArray *)array
                                   withInt:(int)start
                                   withInt:(int)len;
- (id)initWithInt:(int)capacity;
- (IOSFloatArray *)array;
- (int)arrayOffset;
- (JavaNioFloatBuffer *)asReadOnlyBuffer;
- (JavaNioFloatBuffer *)compact;
- (int)compareToWithId:(JavaNioFloatBuffer *)otherBuffer;
- (JavaNioFloatBuffer *)duplicate;
- (BOOL)isEqual:(id)other;
- (float)get;
- (JavaNioFloatBuffer *)getWithFloatArray:(IOSFloatArray *)dest;
- (JavaNioFloatBuffer *)getWithFloatArray:(IOSFloatArray *)dest
                                  withInt:(int)off
                                  withInt:(int)len;
- (float)getWithInt:(int)index;
- (BOOL)hasArray;
- (NSUInteger)hash;
- (BOOL)isDirect;
- (JavaNioByteOrder *)order;
- (IOSFloatArray *)protectedArray;
- (int)protectedArrayOffset;
- (BOOL)protectedHasArray;
- (JavaNioFloatBuffer *)putWithFloat:(float)f;
- (JavaNioFloatBuffer *)putWithFloatArray:(IOSFloatArray *)src;
- (JavaNioFloatBuffer *)putWithFloatArray:(IOSFloatArray *)src
                                  withInt:(int)off
                                  withInt:(int)len;
- (JavaNioFloatBuffer *)putWithJavaNioFloatBuffer:(JavaNioFloatBuffer *)src;
- (JavaNioFloatBuffer *)putWithInt:(int)index
                         withFloat:(float)f;
- (JavaNioFloatBuffer *)slice;
- (NSString *)description;
@end

#endif // _JavaNioFloatBuffer_H_

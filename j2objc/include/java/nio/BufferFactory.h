//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/nio/src/main/java/common/java/nio/BufferFactory.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaNioBufferFactory_H_
#define _JavaNioBufferFactory_H_

@class IOSByteArray;
@class IOSCharArray;
@class IOSDoubleArray;
@class IOSFloatArray;
@class IOSIntArray;
@class IOSLongArray;
@class IOSShortArray;
@class JavaNioByteBuffer;
@class JavaNioCharBuffer;
@class JavaNioDoubleBuffer;
@class JavaNioFloatBuffer;
@class JavaNioIntBuffer;
@class JavaNioLongBuffer;
@class JavaNioShortBuffer;
@protocol JavaLangCharSequence;

#import "JreEmulation.h"

@interface JavaNioBufferFactory : NSObject {
}

+ (JavaNioByteBuffer *)newByteBufferWithByteArray:(IOSByteArray *)array OBJC_METHOD_FAMILY_NONE;
+ (JavaNioByteBuffer *)newByteBufferWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioCharBuffer *)newCharBufferWithCharArray:(IOSCharArray *)array OBJC_METHOD_FAMILY_NONE;
+ (JavaNioCharBuffer *)newCharBufferWithJavaLangCharSequence:(id<JavaLangCharSequence>)chseq OBJC_METHOD_FAMILY_NONE;
+ (JavaNioCharBuffer *)newCharBufferWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioByteBuffer *)newDirectByteBufferWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioDoubleBuffer *)newDoubleBufferWithDoubleArray:(IOSDoubleArray *)array OBJC_METHOD_FAMILY_NONE;
+ (JavaNioDoubleBuffer *)newDoubleBufferWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioFloatBuffer *)newFloatBufferWithFloatArray:(IOSFloatArray *)array OBJC_METHOD_FAMILY_NONE;
+ (JavaNioFloatBuffer *)newFloatBufferWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioIntBuffer *)newIntBufferWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioIntBuffer *)newIntBufferWithIntArray:(IOSIntArray *)array OBJC_METHOD_FAMILY_NONE;
+ (JavaNioLongBuffer *)newLongBufferWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioLongBuffer *)newLongBufferWithLongArray:(IOSLongArray *)array OBJC_METHOD_FAMILY_NONE;
+ (JavaNioShortBuffer *)newShortBufferWithInt:(int)capacity OBJC_METHOD_FAMILY_NONE;
+ (JavaNioShortBuffer *)newShortBufferWithShortArray:(IOSShortArray *)array OBJC_METHOD_FAMILY_NONE;
- (id)init;
@end

#endif // _JavaNioBufferFactory_H_

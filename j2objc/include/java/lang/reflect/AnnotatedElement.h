//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/AnnotatedElement.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangReflectAnnotatedElement_H_
#define _JavaLangReflectAnnotatedElement_H_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaLangAnnotationAnnotation;

#import "JreEmulation.h"

@protocol JavaLangReflectAnnotatedElement < NSObject, JavaObject >
- (id)getAnnotationWithIOSClass:(IOSClass *)annotationType;
- (IOSObjectArray *)getAnnotations;
- (IOSObjectArray *)getDeclaredAnnotations;
- (BOOL)isAnnotationPresentWithIOSClass:(IOSClass *)annotationType;
@end

#endif // _JavaLangReflectAnnotatedElement_H_
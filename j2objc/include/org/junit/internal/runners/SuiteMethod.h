//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/internal/runners/SuiteMethod.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitInternalRunnersSuiteMethod_H_
#define _OrgJunitInternalRunnersSuiteMethod_H_

@class IOSClass;
@protocol JunitFrameworkTest;

#import "JreEmulation.h"
#include "org/junit/internal/runners/JUnit38ClassRunner.h"

@interface OrgJunitInternalRunnersSuiteMethod : OrgJunitInternalRunnersJUnit38ClassRunner {
}

- (id)initWithIOSClass:(IOSClass *)klass;
+ (id<JunitFrameworkTest>)testFromSuiteMethodWithIOSClass:(IOSClass *)klass;
@end

#endif // _OrgJunitInternalRunnersSuiteMethod_H_

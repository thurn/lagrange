//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/util/logging/NSLogHandler.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaUtilLoggingNSLogHandler_H_
#define _JavaUtilLoggingNSLogHandler_H_

@class JavaUtilLoggingLogRecord;

#import "JreEmulation.h"
#include "java/util/logging/Formatter.h"
#include "java/util/logging/Handler.h"

@interface JavaUtilLoggingNSLogHandler : JavaUtilLoggingHandler {
}

- (id)init;
- (void)close;
- (void)flush;
- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;
- (void)logWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;
@end

@interface JavaUtilLoggingNSLogHandler_NSLogFormatter : JavaUtilLoggingFormatter {
}

- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;
- (id)init;
@end

#endif // _JavaUtilLoggingNSLogHandler_H_

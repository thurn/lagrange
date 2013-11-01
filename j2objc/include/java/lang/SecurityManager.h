//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/SecurityManager.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaLangSecurityManager_H_
#define _JavaLangSecurityManager_H_

@class IOSClass;
@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaLangClassLoader;
@class JavaLangThread;
@class JavaLangThreadGroup;
@class JavaSecurityPermission;

#import "JreEmulation.h"

@interface JavaLangSecurityManager : NSObject {
 @public
  BOOL inCheck_;
}

- (id)init;
- (void)checkAcceptWithNSString:(NSString *)host
                        withInt:(int)port;
- (void)checkAccessWithJavaLangThread:(JavaLangThread *)thread;
- (void)checkAccessWithJavaLangThreadGroup:(JavaLangThreadGroup *)group;
- (void)checkConnectWithNSString:(NSString *)host
                         withInt:(int)port;
- (void)checkConnectWithNSString:(NSString *)host
                         withInt:(int)port
                          withId:(id)context;
- (void)checkCreateClassLoader;
- (void)checkDeleteWithNSString:(NSString *)file;
- (void)checkExecWithNSString:(NSString *)cmd;
- (void)checkExitWithInt:(int)status;
- (void)checkLinkWithNSString:(NSString *)libName;
- (void)checkListenWithInt:(int)port;
- (void)checkMemberAccessWithIOSClass:(IOSClass *)cls
                              withInt:(int)type;
- (void)checkPackageAccessWithNSString:(NSString *)packageName;
- (void)checkPackageDefinitionWithNSString:(NSString *)packageName;
- (void)checkPropertiesAccess;
- (void)checkPropertyAccessWithNSString:(NSString *)key;
- (void)checkReadWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;
- (void)checkReadWithNSString:(NSString *)file;
- (void)checkReadWithNSString:(NSString *)file
                       withId:(id)context;
- (void)checkSecurityAccessWithNSString:(NSString *)target;
- (void)checkSetFactory;
- (BOOL)checkTopLevelWindowWithId:(id)window;
- (void)checkSystemClipboardAccess;
- (void)checkAwtEventQueueAccess;
- (void)checkPrintJobAccess;
- (void)checkWriteWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;
- (void)checkWriteWithNSString:(NSString *)file;
- (BOOL)getInCheck;
- (IOSObjectArray *)getClassContext;
- (JavaLangClassLoader *)currentClassLoader;
- (int)classLoaderDepth;
- (IOSClass *)currentLoadedClass;
- (int)classDepthWithNSString:(NSString *)name;
- (BOOL)inClassWithNSString:(NSString *)name;
- (BOOL)inClassLoader;
- (JavaLangThreadGroup *)getThreadGroup;
- (id)getSecurityContext;
- (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)permission;
- (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)permission
                                           withId:(id)context;
- (void)copyAllFieldsTo:(JavaLangSecurityManager *)other;
@end

#endif // _JavaLangSecurityManager_H_
//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/internal/requests/SortingRequest.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitInternalRequestsSortingRequest_H_
#define _OrgJunitInternalRequestsSortingRequest_H_

@class OrgJunitRunnerRunner;
@protocol JavaUtilComparator;

#import "JreEmulation.h"
#include "org/junit/runner/Request.h"

@interface OrgJunitInternalRequestsSortingRequest : OrgJunitRunnerRequest {
 @public
  OrgJunitRunnerRequest *fRequest_;
  id<JavaUtilComparator> fComparator_;
}

- (id)initWithOrgJunitRunnerRequest:(OrgJunitRunnerRequest *)request
             withJavaUtilComparator:(id<JavaUtilComparator>)comparator;
- (OrgJunitRunnerRunner *)getRunner;
- (void)copyAllFieldsTo:(OrgJunitInternalRequestsSortingRequest *)other;
@end

J2OBJC_FIELD_SETTER(OrgJunitInternalRequestsSortingRequest, fRequest_, OrgJunitRunnerRequest *)
J2OBJC_FIELD_SETTER(OrgJunitInternalRequestsSortingRequest, fComparator_, id<JavaUtilComparator>)

#endif // _OrgJunitInternalRequestsSortingRequest_H_
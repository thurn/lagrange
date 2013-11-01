//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/tmp/j2objc-0.8.6.1/junit/build_result/java/org/junit/internal/runners/rules/RuleFieldValidator.java
//
//  Created by tball on 9/18/13.
//

#ifndef _OrgJunitInternalRunnersRulesRuleFieldValidator_H_
#define _OrgJunitInternalRunnersRulesRuleFieldValidator_H_

@class IOSClass;
@class OrgJunitRunnersModelFrameworkField;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/lang/Enum.h"

typedef enum {
  OrgJunitInternalRunnersRulesRuleFieldValidator_CLASS_RULE_VALIDATOR = 0,
  OrgJunitInternalRunnersRulesRuleFieldValidator_RULE_VALIDATOR = 1,
} OrgJunitInternalRunnersRulesRuleFieldValidator;

@interface OrgJunitInternalRunnersRulesRuleFieldValidatorEnum : JavaLangEnum < NSCopying > {
 @public
  IOSClass *fAnnotation_;
  BOOL fOnlyStaticFields_;
}
+ (OrgJunitInternalRunnersRulesRuleFieldValidatorEnum *)CLASS_RULE_VALIDATOR;
+ (OrgJunitInternalRunnersRulesRuleFieldValidatorEnum *)RULE_VALIDATOR;
+ (IOSObjectArray *)values;
+ (OrgJunitInternalRunnersRulesRuleFieldValidatorEnum *)valueOfWithNSString:(NSString *)name;
- (id)copyWithZone:(NSZone *)zone;
- (id)initWithIOSClass:(IOSClass *)annotation
           withBoolean:(BOOL)onlyStaticFields
          withNSString:(NSString *)__name
               withInt:(int)__ordinal;
- (void)validateWithOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)target
                                 withJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateFieldWithOrgJunitRunnersModelFrameworkField:(OrgJunitRunnersModelFrameworkField *)field
                                           withJavaUtilList:(id<JavaUtilList>)errors;
- (void)optionallyValidateStaticWithOrgJunitRunnersModelFrameworkField:(OrgJunitRunnersModelFrameworkField *)field
                                                      withJavaUtilList:(id<JavaUtilList>)errors;
- (void)validatePublicWithOrgJunitRunnersModelFrameworkField:(OrgJunitRunnersModelFrameworkField *)field
                                            withJavaUtilList:(id<JavaUtilList>)errors;
- (void)validateTestRuleOrMethodRuleWithOrgJunitRunnersModelFrameworkField:(OrgJunitRunnersModelFrameworkField *)field
                                                          withJavaUtilList:(id<JavaUtilList>)errors;
- (BOOL)isTestRuleWithOrgJunitRunnersModelFrameworkField:(OrgJunitRunnersModelFrameworkField *)target;
- (BOOL)isMethodRuleWithOrgJunitRunnersModelFrameworkField:(OrgJunitRunnersModelFrameworkField *)target;
- (void)addErrorWithJavaUtilList:(id<JavaUtilList>)errors
withOrgJunitRunnersModelFrameworkField:(OrgJunitRunnersModelFrameworkField *)field
                    withNSString:(NSString *)suffix;
@end

J2OBJC_FIELD_SETTER(OrgJunitInternalRunnersRulesRuleFieldValidatorEnum, fAnnotation_, IOSClass *)

#endif // _OrgJunitInternalRunnersRulesRuleFieldValidator_H_

//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/SimpleDateFormat.java
//
//  Created by tball on 9/18/13.
//

#ifndef _JavaTextSimpleDateFormat_H_
#define _JavaTextSimpleDateFormat_H_

@class IOSObjectArray;
@class JavaLangStringBuffer;
@class JavaTextDateFormatSymbols;
@class JavaTextFieldPosition;
@class JavaTextParsePosition;
@class JavaUtilDate;
@class JavaUtilLocale;
@class JavaUtilTimeZone;
@protocol JavaTextAttributedCharacterIterator;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/text/DateFormat.h"

#define JavaTextSimpleDateFormat_RFC_822_TIMEZONE_FIELD 18
#define JavaTextSimpleDateFormat_STAND_ALONE_DAY_OF_WEEK_FIELD 20
#define JavaTextSimpleDateFormat_STAND_ALONE_MONTH_FIELD 19
#define JavaTextSimpleDateFormat_serialVersionUID 4774881970558875024

@interface JavaTextSimpleDateFormat : JavaTextDateFormat {
 @public
  NSString *pattern_;
  JavaTextDateFormatSymbols *formatData_;
  int creationYear_;
  JavaUtilDate *defaultCenturyStart_;
}

+ (NSString *)PATTERN_CHARS;
- (id)init;
- (id)initWithNSString:(NSString *)pattern;
- (void)validatePatternWithNSString:(NSString *)template_;
- (void)validatePatternCharacterWithChar:(unichar)format;
- (id)initWithNSString:(NSString *)template_
withJavaTextDateFormatSymbols:(JavaTextDateFormatSymbols *)value;
- (id)initWithNSString:(NSString *)template_
    withJavaUtilLocale:(JavaUtilLocale *)locale;
- (id)initWithJavaUtilLocale:(JavaUtilLocale *)locale;
- (void)applyLocalizedPatternWithNSString:(NSString *)template_;
- (void)applyPatternWithNSString:(NSString *)template_;
- (id)clone;
+ (NSString *)defaultPattern;
- (BOOL)isEqual:(id)object;
- (id<JavaTextAttributedCharacterIterator>)formatToCharacterIteratorWithId:(id)object;
- (id<JavaTextAttributedCharacterIterator>)formatToCharacterIteratorImplWithJavaUtilDate:(JavaUtilDate *)date;
- (JavaLangStringBuffer *)formatImplWithJavaUtilDate:(JavaUtilDate *)date
                            withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                           withJavaTextFieldPosition:(JavaTextFieldPosition *)field
                                    withJavaUtilList:(id<JavaUtilList>)fields;
- (void)appendWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
             withJavaTextFieldPosition:(JavaTextFieldPosition *)position
                      withJavaUtilList:(id<JavaUtilList>)fields
                              withChar:(unichar)format
                               withInt:(int)count;
- (void)appendDayOfWeekWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                                        withInt:(int)count
                                    withBoolean:(BOOL)standAlone;
- (void)appendMonthWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                                    withInt:(int)count
                                withBoolean:(BOOL)standAlone;
- (void)appendTimeZoneWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                                       withInt:(int)count
                                   withBoolean:(BOOL)generalTimeZone;
- (void)appendNumericTimeZoneWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                                              withInt:(int)count
                                          withBoolean:(BOOL)generalTimeZone;
- (void)appendNumberWithJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                                     withInt:(int)count
                                     withInt:(int)value;
- (JavaUtilDate *)errorWithJavaTextParsePosition:(JavaTextParsePosition *)position
                                         withInt:(int)offset
                            withJavaUtilTimeZone:(JavaUtilTimeZone *)zone;
- (JavaLangStringBuffer *)formatWithJavaUtilDate:(JavaUtilDate *)date
                        withJavaLangStringBuffer:(JavaLangStringBuffer *)buffer
                       withJavaTextFieldPosition:(JavaTextFieldPosition *)fieldPos;
- (JavaUtilDate *)get2DigitYearStart;
- (JavaTextDateFormatSymbols *)getDateFormatSymbols;
- (NSUInteger)hash;
- (int)parseWithNSString:(NSString *)string
                 withInt:(int)offset
                withChar:(unichar)format
                 withInt:(int)count;
- (int)parseDayOfWeekWithNSString:(NSString *)string
                          withInt:(int)offset
                      withBoolean:(BOOL)standAlone;
- (int)parseMonthWithNSString:(NSString *)string
                      withInt:(int)offset
                      withInt:(int)count
                      withInt:(int)absolute
                  withBoolean:(BOOL)standAlone;
- (JavaUtilDate *)parseWithNSString:(NSString *)string
          withJavaTextParsePosition:(JavaTextParsePosition *)position;
- (NSNumber *)parseNumberWithInt:(int)max
                    withNSString:(NSString *)string
       withJavaTextParsePosition:(JavaTextParsePosition *)position;
- (int)parseNumberWithInt:(int)max
             withNSString:(NSString *)string
                  withInt:(int)offset
                  withInt:(int)field
                  withInt:(int)skew;
- (int)parseTextWithNSString:(NSString *)string
                     withInt:(int)offset
           withNSStringArray:(IOSObjectArray *)text
                     withInt:(int)field;
- (int)parseTimeZoneWithNSString:(NSString *)string
                         withInt:(int)offset;
- (void)set2DigitYearStartWithJavaUtilDate:(JavaUtilDate *)date;
- (void)setDateFormatSymbolsWithJavaTextDateFormatSymbols:(JavaTextDateFormatSymbols *)value;
- (NSString *)toLocalizedPattern;
+ (NSString *)convertPatternWithNSString:(NSString *)template_
                            withNSString:(NSString *)fromChars
                            withNSString:(NSString *)toChars
                             withBoolean:(BOOL)check;
- (NSString *)toPattern;
- (void)copyAllFieldsTo:(JavaTextSimpleDateFormat *)other;
@end

J2OBJC_FIELD_SETTER(JavaTextSimpleDateFormat, pattern_, NSString *)
J2OBJC_FIELD_SETTER(JavaTextSimpleDateFormat, formatData_, JavaTextDateFormatSymbols *)
J2OBJC_FIELD_SETTER(JavaTextSimpleDateFormat, defaultCenturyStart_, JavaUtilDate *)

#endif // _JavaTextSimpleDateFormat_H_
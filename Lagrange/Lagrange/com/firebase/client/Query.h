//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: com/firebase/client/Query.java
//
//  Created by dthurn on 11/1/13.
//

#ifndef _FCQuery_H_
#define _FCQuery_H_

#import "JreEmulation.h"

@interface FCQuery : NSObject {
 @public
  id firebase_;
}

- (id)initWithId:(id)firebase;
- (void)helloWorld;
- (void)copyAllFieldsTo:(FCQuery *)other;
@end

J2OBJC_FIELD_SETTER(FCQuery, firebase_, id)

typedef FCQuery ComFirebaseClientQuery;

#endif // _FCQuery_H_

//
//  LagrangeTests.h
//  Lagrange
//
//  Created by Derek Thurn on 11/5/13.
//
//

#ifndef Lagrange_LagrangeTests_h
#define Lagrange_LagrangeTests_h

@class FCDataSnapshot;

#import <XCTest/XCTest.h>
#import "JreEmulation.h"
#import "TRVSMonitor.h"
#include "ValueEventListener.h"

TRVSMonitor *global_trvs_monitor;

@interface LagrangeTests : XCTestCase

@end

@interface FCTemp_$1 : NSObject < FCValueEventListener > {
}

- (void)onCancelled;
- (void)onDataChangeWithFCDataSnapshot:(FCDataSnapshot *)snapshot;
- (id)init;
@end

#endif

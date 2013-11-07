//
//  LagrangeTests.m
//  LagrangeTests
//
//  Created by Derek Thurn on 11/1/13.
//
//

#include "LagrangeTests.h"
#import "Firebase.h"
#import "DataSnapshot.h"
#include "java/lang/Long.h"

@implementation LagrangeTests

- (void)setUp
{
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown
{
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample
{
    global_trvs_monitor = [[TRVSMonitor alloc] initWithExpectedSignalCount:1];
    FCFirebase *firebase = [[FCFirebase alloc] initWithNSString:@"https://gwt.firebaseio.com"];
    (void) [firebase addValueEventListenerWithFCValueEventListener:[[FCTemp_$1 alloc] init]];
    [firebase setValueWithId:[JavaLangLong valueOfWithLong:123LL]];

    BOOL signaled = [global_trvs_monitor waitWithTimeout: 10.0];
    if (!signaled) {
      XCTFail(@"Test timed out!");
    }
}

@end

@implementation FCTemp_$1

- (void)onCancelled {
}

- (void)onDataChangeWithFCDataSnapshot:(FCDataSnapshot *)snapshot {
    id value = [((FCDataSnapshot *) nil_chk(snapshot)) getValue];
    [global_trvs_monitor signal];
    [NSException raise:@"exception" format:@"string"];
}

- (id)init {
    return [super init];
}

@end

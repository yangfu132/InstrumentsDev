//
//  IDMAssemblyLeanModal.m
//  InstrumentsDev
//
//  Created by szzc on 2017/3/2.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import "IDMAssemblyLeanModal.h"

int Add(int arg1, int arg2)
{
    return arg1 + arg2;
}

struct myrd{
    int i1;
    int i2;
    int i3;
};

struct myrd myfunc(){
    struct myrd r1;
    r1.i1 = 1;
    r1.i2 = 2;
    r1.i3 = r1.i1 + r1.i2;
    NSLog(@"%d,%d,%d",r1.i1,r1.i2,r1.i3);
    return r1;
}

void mainTest()
{
    struct myrd r;
    r = myfunc();
    NSLog(@"%d,%d,%d",r.i1,r.i2,r.i3);
}

@implementation IDMAssemblyLeanModal
- (instancetype) init
{
    self = [super init];
    if (self)
    {
        mainTest();
    }
    
    return self;
}
@end

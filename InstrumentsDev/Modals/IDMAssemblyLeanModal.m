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

@implementation IDMAssemblyLeanModal
- (instancetype) init
{
    self = [super init];
    if (self)
    {
        int nResult = Add(1,2);
        if (nResult)
        {
            
        }
    }
    
    return self;
}
@end

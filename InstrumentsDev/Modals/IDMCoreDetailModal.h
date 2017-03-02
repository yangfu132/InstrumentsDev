//
//  IDMCoreDetailModal.h
//  InstrumentsDev
//
//  Created by szzc on 2017/3/2.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "InstrumentsPrivateHeader.h"


@interface IDMCoreDetailModal : NSObject
{
    XRAnalysisCoreDetailViewController* _detailController;
}

@property (strong) XRAnalysisCoreDetailViewController* detailController;
@end

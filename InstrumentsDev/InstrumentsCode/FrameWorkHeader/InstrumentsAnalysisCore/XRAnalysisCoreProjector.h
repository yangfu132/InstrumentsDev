//
//  XRAnalysisCoreProjector.h
//  MacDemoNew
//
//  Created by yangfl on 2016/12/27.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
@interface XRAnalysisCoreProjector : NSObject

@end
*/

/*
@interface XRAnalysisCoreProjector : NSObject
{
    XRAnalysisCoreProjectorSpec *_spec;
    XRStorageManager *_store;
    struct unique_ptr<Projection, std::__1::default_delete<Projection>> _projector;
    id <XRAnalysisCoreRegistry> _registry;
    NSDate *_creationTime;
    XRAnalysisCoreRowArray *_factualContent;
    XRAnalysisCoreRowArray *_speculativeContent;
    NSOperation *_currentRefreshOp;
    XRAnalysisCore *_core;
}

+ (id)refreshAndAccessProjectors:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak XRAnalysisCore *core; // @synthesize core=_core;
@property(retain, nonatomic) NSOperation *currentRefreshOp; // @synthesize currentRefreshOp=_currentRefreshOp;
@property(retain, nonatomic) XRAnalysisCoreRowArray *speculativeContent; // @synthesize speculativeContent=_speculativeContent;
@property(retain, nonatomic) XRAnalysisCoreRowArray *factualContent; // @synthesize factualContent=_factualContent;
@property(copy, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) XRAnalysisCoreProjectorSpec *spec; // @synthesize spec=_spec;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)destroyCursor:(struct XRAnalysisCoreProjectionCursor *)arg1;
- (struct XRAnalysisCoreProjectionCursor *)createNewCursorWithCore:(id)arg1;
- (id)refresh;
- (void)access:(CDUnknownBlockType)arg1;
- (unsigned short)engineeringTypeForProjectionIndex:(unsigned char)arg1;
- (id)displayNameForProjectionIndex:(unsigned char)arg1;
- (void)receiveSpeculativeRows:(struct XRAnalysisCoreAbstractRowArrayCursor *)arg1 core:(id)arg2;
- (void)purgeSpeculativeAggregates;
- (void)receiveNewRows:(struct XRAnalysisCoreAbstractRowArrayCursor *)arg1 core:(id)arg2 activity:(id)arg3;
- (void)_prepareForUpdate:(struct XRAnalysisCoreAbstractRowArrayCursor *)arg1 core:(id)arg2;
- (void)readSourceWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)stale;
- (void)attachToSource;
@property(readonly, nonatomic) unsigned int tableID;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpec:(id)arg1 registry:(id)arg2;

@end
*/

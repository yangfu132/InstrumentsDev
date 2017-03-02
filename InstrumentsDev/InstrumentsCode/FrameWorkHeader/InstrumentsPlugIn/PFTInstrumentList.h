//
//  PFTInstrumentList.h
//  MacDemoNew
//
//  Created by yangfl on 2016/12/28.
//  Copyright © 2016年 szzc. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
@interface PFTInstrumentList : NSObject

@end
*/

/*
@interface PFTInstrumentList : NSObject <PFTHostViewProtocol, NSCoding>
{
    NSMutableArray *_instruments;
    NSMutableDictionary *_instrumentsByPlugin;
    unsigned int _maxNumberAllowed;
    BOOL _bumpsFirstOnOverflow;
    int _viewType;
    NSMutableArray *_missingInstrumentErrorStrings;
    XRTrace *_trace;
}

- (void).cxx_destruct;
- (id)missingInstrumentErrorStrings;
- (unsigned long long)missingInstrumentCount;
- (BOOL)canReplay;
- (BOOL)canRun;
- (void)pauseCommandWithState:(BOOL)arg1;
- (BOOL)allInstrumentsSupportMode:(id)arg1;
- (BOOL)allInstrumentsSupportTargetType:(int)arg1;
- (void)voteForEpoch:(id)arg1 fromDevice:(id)arg2;
- (void)endCommand:(id)arg1;
- (void)willEndCommand:(id)arg1;
- (void)startCommand:(id)arg1;
- (BOOL)prepareCommand:(id)arg1 error:(id *)arg2;
- (BOOL)verifyCommand:(id)arg1 error:(id *)arg2;
- (BOOL)acceptCommand:(id)arg1;
- (void)_enumerateInstrumentsByPluginWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInstrumentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)allInstruments;
- (id)selectedInstrument;
- (void)removeAllInstruments;
- (void)removeInstrument:(id)arg1;
- (void)removeInstrumentAtIndex:(unsigned long long)arg1;
- (void)moveInstrument:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceInstrument:(id)arg1 withInstrument:(id)arg2;
- (void)addInstrument:(id)arg1;
- (void)addInstrument:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)instrumentByUUID:(id)arg1;
- (id)instrumentByUUIDType:(id)arg1;
- (unsigned long long)indexOfInstrument:(id)arg1;
- (id)instrumentAtIndex:(unsigned long long)arg1;
- (id)firstInstrument;
- (unsigned long long)count;
- (BOOL)isInstrumentOwner:(id)arg1;
- (void)_postNotification:(id)arg1 forInstrument:(id)arg2;
- (int)hostType;
- (void)setBumpsFirstOnOverflow:(BOOL)arg1;
- (BOOL)bumpsFirstOnOverflow;
- (void)setMaxNumberAllowed:(unsigned int)arg1;
- (unsigned int)maxNumberAllowed;
- (void)restoreFromTraceTemplateData:(id)arg1;
- (id)traceTemplateData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)trace;
- (void)setTrace:(id)arg1;
- (void)resetCommand;
- (void)replaceType:(id)arg1 withType:(id)arg2;
- (void)updateInstrumentsWithType:(id)arg1;
- (id)initForHostType:(int)arg1;
- (id)init;

@end
*/

//
//  ViewController.h
//  InstrumentsDev
//
//  Created by szzc on 2017/3/2.
//  Copyright © 2017年 szzc. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController
{
    NSString* _strTracePath;
    NSMutableArray* _funcTimeArray;
    NSMutableArray* _funcStackArray;
    NSMutableArray* _wifiTimeArray;
    NSMutableArray* _wifiOutArray;
    NSMutableArray* _wifiInArray;
    
    NSMutableArray* _wifiTimeFrontArray;
    NSMutableArray* _wifiTimeBackArray;
    NSMutableDictionary* _columnDictionary;
}
@property (weak) IBOutlet NSView* viewContent;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface WFFeedNewsMsgImageModel : NSObject <NSCoding>
{
    int _h;
    int _w;
    NSString *_url;
}

@property(nonatomic) int w; // @synthesize w=_w;
@property(nonatomic) int h; // @synthesize h=_h;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


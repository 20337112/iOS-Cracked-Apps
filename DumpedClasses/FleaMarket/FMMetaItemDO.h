//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMItemDO.h"

@class FMMetaCommentDO;

@interface FMMetaItemDO : FMItemDO
{
    double _metaCellHeight;
    double _metaTitleHeight;
    double _metaTitleMaxWidth;
    double _metaCommentHeight;
    FMMetaCommentDO *_commentDO;
}

@property(retain, nonatomic) FMMetaCommentDO *commentDO; // @synthesize commentDO=_commentDO;
@property(nonatomic) double metaCommentHeight; // @synthesize metaCommentHeight=_metaCommentHeight;
@property(nonatomic) double metaTitleMaxWidth; // @synthesize metaTitleMaxWidth=_metaTitleMaxWidth;
@property(nonatomic) double metaTitleHeight; // @synthesize metaTitleHeight=_metaTitleHeight;
@property(nonatomic) double metaCellHeight; // @synthesize metaCellHeight=_metaCellHeight;
- (void).cxx_destruct;
- (_Bool)hasSingleComment;
- (_Bool)hasPairComment;
- (_Bool)hasComment;
- (id)init;

@end

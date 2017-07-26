//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SqlObject : NSObject
{
    _Bool _isDBInit;
    struct sqlite3 *_dbHandle;
}

@property(nonatomic) _Bool isDBInit; // @synthesize isDBInit=_isDBInit;
@property(nonatomic) struct sqlite3 *dbHandle; // @synthesize dbHandle=_dbHandle;
- (_Bool)isHasInit;
- (id)queueStmt:(int)arg1;
- (int)getTopId;
- (int)getSelectResultCount;
- (void)insertData:(id)arg1;
- (void)createDataTable;
- (void)deleteDataTable;
- (_Bool)createDabase;
- (_Bool)deleteWithIndex:(int)arg1;

@end


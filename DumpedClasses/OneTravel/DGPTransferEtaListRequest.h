//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DGPBaseRequest.h"

@interface DGPTransferEtaListRequest : DGPBaseRequest
{
}

- (id)init;
- (id)initWithStartLatitude:(double)arg1 startLongitude:(double)arg2 endLatitude:(double)arg3 endLongtitude:(double)arg4 cityID:(id)arg5 buses:(id)arg6 departuretime:(double)arg7 callbackSnapshot:(id)arg8 callbackPosition:(id)arg9;
- (id)initWithOriginPoiModel:(id)arg1 destinationModel:(id)arg2 cityID:(id)arg3 buses:(id)arg4 departuretime:(double)arg5 callbackSnapshot:(id)arg6 callbackPosition:(id)arg7;

@end


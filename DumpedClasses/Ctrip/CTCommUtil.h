//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTCommUtil : NSObject
{
}

+ (unsigned long long)currentTimeMillisForSerialNumber;
+ (id)propertyArrFromAnnotationArr:(id)arg1 Class:(Class)arg2;
+ (int)adjustFixedLengthWithAnnotationModel:(id)arg1 encodingCode:(unsigned long long)arg2;
+ (id)convertPriceValueIntoStringWithPriceValue:(long long)arg1;
+ (long long)convertStringIntoPriceValueWithString:(id)arg1;
+ (int)readByteWith:(int)arg1 readLength:(int)arg2 readData:(id)arg3;
+ (id)readDataWithSocket:(int)arg1 readLength:(int)arg2 readBufferLength:(int)arg3;

@end


/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying> {
    unsigned int  _defaultPaymentInstrumentIndex;
    bool  _deviceDisabled;
    struct { 
        unsigned int defaultPaymentInstrumentIndex : 1; 
        unsigned int deviceDisabled : 1; 
        unsigned int locked : 1; 
        unsigned int userDisabled : 1; 
    }  _has;
    bool  _locked;
    NSMutableArray * _paymentInstruments;
    bool  _userDisabled;
}

@property (nonatomic) unsigned int defaultPaymentInstrumentIndex;
@property (nonatomic) bool deviceDisabled;
@property (nonatomic) bool hasDefaultPaymentInstrumentIndex;
@property (nonatomic) bool hasDeviceDisabled;
@property (nonatomic) bool hasLocked;
@property (nonatomic) bool hasUserDisabled;
@property (nonatomic) bool locked;
@property (nonatomic, retain) NSMutableArray *paymentInstruments;
@property (nonatomic) bool userDisabled;

+ (Class)paymentInstrumentsType;

- (void).cxx_destruct;
- (void)addPaymentInstruments:(id)arg1;
- (void)clearPaymentInstruments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)defaultPaymentInstrumentIndex;
- (id)description;
- (bool)deviceDisabled;
- (id)dictionaryRepresentation;
- (bool)hasDefaultPaymentInstrumentIndex;
- (bool)hasDeviceDisabled;
- (bool)hasLocked;
- (bool)hasUserDisabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)locked;
- (void)mergeFrom:(id)arg1;
- (id)paymentInstruments;
- (id)paymentInstrumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentInstrumentsCount;
- (bool)readFrom:(id)arg1;
- (void)setDefaultPaymentInstrumentIndex:(unsigned int)arg1;
- (void)setDeviceDisabled:(bool)arg1;
- (void)setHasDefaultPaymentInstrumentIndex:(bool)arg1;
- (void)setHasDeviceDisabled:(bool)arg1;
- (void)setHasLocked:(bool)arg1;
- (void)setHasUserDisabled:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setPaymentInstruments:(id)arg1;
- (void)setUserDisabled:(bool)arg1;
- (bool)userDisabled;
- (void)writeTo:(id)arg1;

@end
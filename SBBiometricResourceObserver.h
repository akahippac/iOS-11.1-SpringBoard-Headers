//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBPearlMatchingStateProvider.h"
#import "SBUIBiometricResourceObserver.h"

@class NSString;

@interface SBBiometricResourceObserver : NSObject <SBUIBiometricResourceObserver, SBPearlMatchingStateProvider>
{
    _Bool _seenMatchResultSinceScreenOn;
    id <SBPearlMatchingStateProviderDelegate> _delegate;
    id <SBUIBiometricResource> _biometricResource;
}

@property(nonatomic) __weak id <SBUIBiometricResource> biometricResource; // @synthesize biometricResource=_biometricResource;
@property(nonatomic) _Bool seenMatchResultSinceScreenOn; // @synthesize seenMatchResultSinceScreenOn=_seenMatchResultSinceScreenOn;
@property(nonatomic) __weak id <SBPearlMatchingStateProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool pearlMatchEnabledAndPossible;
- (void)reset;
- (id)initWithBiometricResource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


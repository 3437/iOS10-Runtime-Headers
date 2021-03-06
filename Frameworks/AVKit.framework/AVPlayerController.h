/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerController : UIResponder {
    long long  _actionAtItemEnd;
    bool  _atMaxTime;
    bool  _atMinTime;
    NSArray * _audioMediaSelectionOptions;
    bool  _audioSessionInterrupted;
    id  _audioSessionInterruptionObserver;
    NSArray * _availableMetadataFormats;
    bool  _compatibleWithAirPlayVideo;
    bool  _composable;
    NSArray * _contentChapters;
    id  _currentLocaleDidChangeObserver;
    bool  _deviceBatteryChargingOrFull;
    bool  _deviceBatteryMonitoringWasEnabled;
    id  _deviceBatteryStateDidChangeObserver;
    bool  _disablingAutomaticTermination;
    bool  _forceScanning;
    bool  _hasDiscoveredVideo;
    bool  _hasProtectedContent;
    bool  _ignoreRateKeyValueChange;
    bool  _isPictureInPictureSupported;
    bool  _isResumed;
    bool  _isScanningBackward;
    bool  _isScanningForward;
    bool  _jKeyDown;
    bool  _kKeyDown;
    bool  _lKeyDown;
    NSArray * _legibleMediaSelectionOptions;
    bool  _looping;
    NSDictionary * _metadata;
    bool  _needsUpdateHasDiscoveredVideo;
    bool  _pendingSeek;
    bool  _pictureInPictureInterrupted;
    AVPlayer * _player;
    id  _playerItemDidPlayToEndTimeObserver;
    id  _playerItemTimeJumpedObserver;
    bool  _playingOnSecondScreen;
    double  _preScanningRate;
    bool  _preventingIdleDisplaySleep;
    bool  _preventingIdleSystemSleep;
    float  _rate;
    double  _rateBeforeForceScanning;
    float  _rateBeforeInterruption;
    double  _rateBeforeScrubBegan;
    unsigned long long  _scanningCount;
    bool  _scrubbing;
    NSObject<OS_dispatch_queue> * _seekQueue;
    NSObject<OS_dispatch_source> * _seekTimer;
    double  _seekToTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _seekToTimeInternal;
    bool  _seeking;
    bool  _seekingInternal;
    bool  _shouldPlayWhenLikelyToKeepUp;
    double  _timeOfLastUpdate;
    AVValueTiming * _timing;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _toleranceAfter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _toleranceBefore;
    id  _updateAtMinMaxTimePeriodicObserverToken;
    id  _updateTimingPeriodicObserverToken;
}

@property (nonatomic) bool CALayerDestinationIsTVOut;
@property (getter=isAtMaxTime, nonatomic) bool atMaxTime;
@property (getter=isAtMinTime, nonatomic) bool atMinTime;
@property (nonatomic, retain) NSArray *availableMetadataFormats;
@property (getter=isCompatibleWithAirPlayVideo, nonatomic) bool compatibleWithAirPlayVideo;
@property (getter=isComposable, nonatomic) bool composable;
@property (nonatomic, retain) NSArray *contentChapters;
@property (getter=isDeviceBatteryChargingOrFull, nonatomic) bool deviceBatteryChargingOrFull;
@property (getter=isDisablingAutomaticTermination, nonatomic) bool disablingAutomaticTermination;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool hasDiscoveredVideo;
@property (nonatomic) bool hasProtectedContent;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, readonly) float nominalFrameRate;
@property (nonatomic, retain) AVPlayer *player;
@property (getter=isPlayingOnSecondScreen, nonatomic) bool playingOnSecondScreen;
@property (getter=isPreventingIdleDisplaySleep, nonatomic) bool preventingIdleDisplaySleep;
@property (getter=isPreventingIdleSystemSleep, nonatomic) bool preventingIdleSystemSleep;
@property (nonatomic) double rateBeforeScrubBegan;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *seekTimer;
@property (nonatomic) double seekToTime;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } seekToTimeInternal;
@property (getter=isSeeking, nonatomic) bool seeking;
@property (getter=isSeekingInternal) bool seekingInternal;
@property (nonatomic, readonly) bool shouldPreventIdleDisplaySleep;
@property (nonatomic, readonly) long long status;
@property (nonatomic, retain) AVValueTiming *timing;

+ (void)initialize;
+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeek;
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingCompletelySeekable;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+ (id)keyPathsForValuesAffectingExternalPlaybackType;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingHasContentChapters;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasShareableContent;
+ (id)keyPathsForValuesAffectingHasTrimmableContent;
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+ (id)keyPathsForValuesAffectingStatus;

- (void).cxx_destruct;
- (bool)CALayerDestinationIsTVOut;
- (void)_attemptToResumePlaybackAfterInterruption;
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;
- (void)_enableAutoMediaSelection:(id)arg1;
- (bool)_isMarkedNotSerializablePlayerItem:(id)arg1;
- (bool)_isRestrictedFromSavingPlayerItem:(id)arg1;
- (id)_queuePlayer;
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;
- (void)_setNeedsUpdateHasDiscoveredVideo;
- (void)_updateHasDiscoveredVideoIfNeeded;
- (void)_updateScanningBackwardRate;
- (void)_updateScanningForwardRate;
- (void)actuallySeekToTime;
- (bool)allowsExternalPlayback;
- (id)audioMediaSelectionOptions;
- (id)audioOptions;
- (void)autoplay:(id)arg1;
- (id)availableMetadataFormats;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing;
- (void)beginScrubbing:(id)arg1;
- (bool)canPause;
- (bool)canPlay;
- (bool)canScanBackward;
- (bool)canScanForward;
- (bool)canSeek;
- (bool)canSeekChapterBackward;
- (bool)canSeekChapterForward;
- (bool)canSeekFrameBackward;
- (bool)canSeekFrameForward;
- (bool)canSeekToBeginning;
- (bool)canSeekToEnd;
- (bool)canTogglePlayback;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (id)contentChapters;
- (struct CGSize { double x1; double x2; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (id)currentAudioMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (double)currentTime;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (void)decreaseVolume:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing;
- (void)endScrubbing:(id)arg1;
- (id)error;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (long long)externalPlaybackType;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (bool)hasAudioMediaSelectionOptions;
- (bool)hasContent;
- (bool)hasContentChapters;
- (bool)hasDiscoveredVideo;
- (bool)hasEnabledAudio;
- (bool)hasEnabledVideo;
- (bool)hasLegibleMediaSelectionOptions;
- (bool)hasLiveStreamingContent;
- (bool)hasMediaSelectionOptions;
- (bool)hasProtectedContent;
- (bool)hasShareableContent;
- (bool)hasTrimmableContent;
- (void)increaseVolume:(id)arg1;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (bool)isAtMaxTime;
- (bool)isAtMinTime;
- (bool)isCompatibleWithAirPlayVideo;
- (bool)isCompletelySeekable;
- (bool)isComposable;
- (bool)isDeviceBatteryChargingOrFull;
- (bool)isDisablingAutomaticTermination;
- (bool)isExternalPlaybackActive;
- (bool)isLooping;
- (bool)isPictureInPictureInterrupted;
- (bool)isPictureInPicturePossible;
- (bool)isPlaying;
- (bool)isPlayingOnExternalScreen;
- (bool)isPlayingOnSecondScreen;
- (bool)isPreventingIdleDisplaySleep;
- (bool)isPreventingIdleSystemSleep;
- (bool)isScrubbing;
- (bool)isSeeking;
- (bool)isSeekingInternal;
- (id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
- (id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
- (id)legibleMediaSelectionOptions;
- (id)legibleOptions;
- (id)loadedTimeRanges;
- (double)maxTime;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)metadata;
- (double)minTime;
- (float)nominalFrameRate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)player;
- (double)rate;
- (double)rateBeforeScrubBegan;
- (void)reloadAudioOptions;
- (void)reloadLegibleOptions;
- (void)reloadOptions;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (id)scanningDelays;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekFrameBackward:(id)arg1;
- (void)seekFrameForward:(id)arg1;
- (id)seekTimer;
- (void)seekToBeginning:(id)arg1;
- (void)seekToChapter:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (double)seekToTime;
- (void)seekToTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })seekToTimeInternal;
- (id)seekableTimeRanges;
- (void)setAllowsExternalPlayback:(bool)arg1;
- (void)setAtMaxTime:(bool)arg1;
- (void)setAtMinTime:(bool)arg1;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (void)setAvailableMetadataFormats:(id)arg1;
- (void)setCALayerDestinationIsTVOut:(bool)arg1;
- (void)setCompatibleWithAirPlayVideo:(bool)arg1;
- (void)setComposable:(bool)arg1;
- (void)setContentChapters:(id)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setDeviceBatteryChargingOrFull:(bool)arg1;
- (void)setDisablingAutomaticTermination:(bool)arg1;
- (void)setHasProtectedContent:(bool)arg1;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (void)setLooping:(bool)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMinTime:(double)arg1;
- (void)setPictureInPictureInterrupted:(bool)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setPreventingIdleDisplaySleep:(bool)arg1;
- (void)setPreventingIdleSystemSleep:(bool)arg1;
- (void)setRate:(double)arg1;
- (void)setRateBeforeScrubBegan:(double)arg1;
- (void)setRateWithForce:(double)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setSeekToTime:(double)arg1;
- (void)setSeekToTimeInternal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSeeking:(bool)arg1;
- (void)setSeekingInternal:(bool)arg1;
- (void)setTiming:(id)arg1;
- (void)setVolume:(double)arg1;
- (bool)shouldPreventIdleDisplaySleep;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (long long)status;
- (void)throttledSeekToTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toleranceBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toleranceAfter:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)timing;
- (void)toggleMuted:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)updateAtMinMaxTime;
- (void)updateTiming;
- (double)volume;

@end

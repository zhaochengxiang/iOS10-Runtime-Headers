/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULoggingSettings : PUSettings {
    long long  _allDomainsLogLevel;
    long long  _backendLogLevel;
    long long  _cameraLogLevel;
    unsigned char  _isLogAsNSLogEnabled;
    unsigned char  _isLogEverythingEnabled;
    NSMutableDictionary * _logLevels;
    long long  _uiLogLevel;
}

@property (nonatomic) long long allDomainsLogLevel;
@property (nonatomic) long long backendLogLevel;
@property (nonatomic) long long cameraLogLevel;
@property (nonatomic) unsigned char isLogAsNSLogEnabled;
@property (nonatomic) unsigned char isLogEverythingEnabled;
@property (nonatomic, retain) NSMutableDictionary *logLevels;
@property (nonatomic) long long uiLogLevel;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addLevel:(long long)arg1 forGlobalDomain:(id)arg2;
- (long long)allDomainsLogLevel;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (long long)backendLogLevel;
- (long long)cameraLogLevel;
- (unsigned char)isLogAsNSLogEnabled;
- (unsigned char)isLogEverythingEnabled;
- (void)loadLogLevels;
- (id)logLevels;
- (void)performPostSaveActions;
- (void)setAllDomainsLogLevel:(long long)arg1;
- (void)setBackendLogLevel:(long long)arg1;
- (void)setCameraLogLevel:(long long)arg1;
- (void)setDefaultLoggingValues;
- (void)setIsLogAsNSLogEnabled:(unsigned char)arg1;
- (void)setIsLogEverythingEnabled:(unsigned char)arg1;
- (void)setLogLevels:(id)arg1;
- (void)setUiLogLevel:(long long)arg1;
- (long long)uiLogLevel;
- (void)updateLevelsMatching:(id)arg1 toLevel:(long long)arg2;

@end
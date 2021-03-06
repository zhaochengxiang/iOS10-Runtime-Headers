/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TURepeatingActor : NSObject {
    id /* block */  _action;
    id /* block */  _attemptNextIterationBlock;
    id /* block */  _completionBlock;
    bool  _currentlyPerformingAction;
    unsigned long long  _iterationsRemaining;
    double  _pauseDuration;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _running;
    bool  _stopped;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic) id /* block */ attemptNextIterationBlock;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (getter=isCurrentlyPerformingAction, nonatomic) bool currentlyPerformingAction;
@property (nonatomic) unsigned long long iterationsRemaining;
@property (nonatomic) double pauseDuration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isRunning, nonatomic) bool running;
@property (getter=isStopped, nonatomic) bool stopped;

- (void).cxx_destruct;
- (void)_attemptNextIteration;
- (void)_completeWithDidFinish:(bool)arg1;
- (bool)_hasIterationsRemaining;
- (void)_stopWithDidFinish:(bool)arg1;
- (id /* block */)action;
- (id /* block */)attemptNextIterationBlock;
- (void)beginRepeatingAction:(id /* block */)arg1 iterations:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)beginRepeatingAction:(id /* block */)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(id /* block */)arg4;
- (id /* block */)completionBlock;
- (id)init;
- (bool)isCurrentlyPerformingAction;
- (bool)isRunning;
- (bool)isStopped;
- (unsigned long long)iterationsRemaining;
- (double)pauseDuration;
- (id)queue;
- (void)setAction:(id /* block */)arg1;
- (void)setAttemptNextIterationBlock:(id /* block */)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCurrentlyPerformingAction:(bool)arg1;
- (void)setIterationsRemaining:(unsigned long long)arg1;
- (void)setPauseDuration:(double)arg1;
- (void)setQueue:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setStopped:(bool)arg1;
- (void)stop;

@end

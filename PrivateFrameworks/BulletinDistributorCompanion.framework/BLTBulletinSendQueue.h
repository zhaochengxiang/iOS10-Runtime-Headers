/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTBulletinSendQueue : BLTBulletinSendQueuePassthrough {
    BLTBulletinSendQueueAttachmentSender * _attachmentSender;
    NSMutableArray * _completionHandlers;
    PBCodable * _firstRequest;
    unsigned short  _firstRequestType;
    NSDate * _lastItemDate;
    NSDate * _lastQueueSendDate;
    NSObject<OS_dispatch_queue> * _queue;
    BLTSendQueueSerializer * _queueSerializer;
    NSMutableArray * _queuedBlockHandlers;
    NSNumber * _timeout;
    PCPersistentTimer * _timeoutTimer;
}

- (void).cxx_destruct;
- (void)_queue_performSend;
- (void)_queue_queuePending;
- (void)_queue_startTimerWithFireDate:(id)arg1;
- (void)_sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 isTrafficRestricted:(bool)arg4 attachmentURL:(id)arg5 attachmentKey:(id)arg6 didSend:(id /* block */)arg7 didQueue:(id /* block */)arg8;
- (void)handleFileURL:(id)arg1;
- (id)init;
- (void)queuePending;
- (void)sendNow;

@end
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseChatViewModel.h"

#import "IMessageNodeStatusExt.h"

@class CBaseContact, CMessageWrap, NSString;

@interface BaseMessageViewModel : BaseChatViewModel <IMessageNodeStatusExt>
{
    CBaseContact *m_contact;
    CMessageWrap *m_messageWrap;
    struct CGSize m_contentViewSize;
    long long m_orientation;
    NSString *m_cpKeyForChatRoomMessage;
    NSString *m_cpKeyForChatRoomDisplayName;
    _Bool m_isChatRoomMessageUnsafe;
    _Bool m_isChatRoomDisplayNameUnsafe;
    _Bool m_isSender;
    _Bool _isShowStatusView;
    _Bool _highlighted;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (id)createMessageViewModelWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
+ (void)initMessageViewModelClassList;
+ (void)registerMessageViewModelClass:(Class)arg1;
- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)additionalAccessibilityDescription;
- (id)chatRoomDisplayName; // 我的昵称
@property(retain, nonatomic) CBaseContact *contact; // @synthesize contact=m_contact;
@property(readonly, nonatomic) struct CGSize contentViewSize; // @synthesize contentViewSize=m_contentViewSize;
@property(retain, nonatomic) NSString *cpKeyForChatRoomDisplayName; // @synthesize cpKeyForChatRoomDisplayName=m_cpKeyForChatRoomDisplayName;
@property(retain, nonatomic) NSString *cpKeyForChatRoomMessage; // @synthesize cpKeyForChatRoomMessage=m_cpKeyForChatRoomMessage;
- (void)dealloc;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
@property(nonatomic) _Bool isChatRoomDisplayNameUnsafe; // @synthesize isChatRoomDisplayNameUnsafe=m_isChatRoomDisplayNameUnsafe;
@property(nonatomic) _Bool isChatRoomMessageUnsafe; // @synthesize isChatRoomMessageUnsafe=m_isChatRoomMessageUnsafe;
@property(readonly, nonatomic) _Bool isSender; // @synthesize isSender=m_isSender;
- (_Bool)isShowSendOKView;
@property(nonatomic) _Bool isShowStatusView; // @synthesize isShowStatusView=_isShowStatusView;
- (struct CGSize)measure:(struct CGSize)arg1;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=m_messageWrap;
@property(readonly, nonatomic) unsigned int msgStatus;
- (void)onMessageUpdateStatus;
- (void)resetLayoutCache;
- (void)updateContentViewHeight:(double)arg1;
- (void)updateCrashProtectedState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


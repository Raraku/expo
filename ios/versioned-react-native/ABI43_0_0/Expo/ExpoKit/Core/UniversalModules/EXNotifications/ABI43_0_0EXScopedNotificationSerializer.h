// Copyright 2018-present 650 Industries. All rights reserved.

#import <UserNotifications/UserNotifications.h>
#import <ABI43_0_0EXNotifications/ABI43_0_0EXNotificationSerializer.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABI43_0_0EXScopedNotificationSerializer : ABI43_0_0EXNotificationSerializer

+ (NSDictionary *)serializedNotificationResponse:(UNNotificationResponse *)response;
+ (NSDictionary *)serializedNotification:(UNNotification *)notification;

@end

NS_ASSUME_NONNULL_END

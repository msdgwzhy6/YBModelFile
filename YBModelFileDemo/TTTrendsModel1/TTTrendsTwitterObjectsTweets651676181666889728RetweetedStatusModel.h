//
//  TTTrendsTwitterObjectsTweets651676181666889728RetweetedStatusModel.h
//  YBModelFileDemo
//
//  Created by indulgeIn on 2019/03/21.
//  Copyright © 2019 indulgeIn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TTTrendsTwitterObjectsTweets651676181666889728RetweetedStatusEntitiesModel.h"
#import "TTTrendsTwitterObjectsTweets651676181666889728RetweetedStatusUserModel.h"
#import "TTTrendsTwitterObjectsTweets651676181666889728RetweetedStatusExtendedEntitiesModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface TTTrendsTwitterObjectsTweets651676181666889728RetweetedStatusModel : NSObject <NSCopying, NSCoding>

@property (nonatomic, copy) NSString *place;

@property (nonatomic, copy) NSString *contributors;

@property (nonatomic, copy) NSString *source;

@property (nonatomic, assign) NSInteger conversation_id;

@property (nonatomic, assign) BOOL truncated;

@property (nonatomic, assign) BOOL possibly_sensitive;

@property (nonatomic, copy) NSString *lang;

@property (nonatomic, assign) BOOL is_quote_status;

@property (nonatomic, copy) NSString *in_reply_to_status_id;

@property (nonatomic, strong) TTTrendsTwitterObjectsTweets651676181666889728RetweetedStatusEntitiesModel *entities;

@property (nonatomic, copy) NSString *in_reply_to_screen_name;

@property (nonatomic, assign) BOOL possibly_sensitive_appealable;

@property (nonatomic, assign) NSInteger retweet_count;

@property (nonatomic, assign) BOOL favorited;

@property (nonatomic, copy) NSString *geo;

@property (nonatomic, assign) NSInteger id;

@property (nonatomic, strong) TTTrendsTwitterObjectsTweets651676181666889728RetweetedStatusUserModel *user;

@property (nonatomic, copy) NSString *in_reply_to_user_id;

@property (nonatomic, strong) TTTrendsTwitterObjectsTweets651676181666889728RetweetedStatusExtendedEntitiesModel *extended_entities;

@property (nonatomic, assign) BOOL retweeted;

@property (nonatomic, copy) NSString *supplemental_language;

@property (nonatomic, copy) NSString *text;

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, copy) NSString *in_reply_to_user_id_str;

@property (nonatomic, assign) NSInteger favorite_count;

@property (nonatomic, copy) NSString *coordinates;

@property (nonatomic, copy) NSString *id_str;

@property (nonatomic, copy) NSString *in_reply_to_status_id_str;

@end

NS_ASSUME_NONNULL_END
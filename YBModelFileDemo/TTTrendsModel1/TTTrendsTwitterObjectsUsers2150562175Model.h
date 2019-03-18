//
//  TTTrendsTwitterObjectsUsers2150562175Model.h
//  YBModelFileDemo
//
//  Created by indulgeIn on 2019/03/21.
//  Copyright © 2019 indulgeIn. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TTTrendsTwitterObjectsUsers2150562175EntitiesModel.h"
#import "TTTrendsTwitterObjectsUsers2150562175CountsModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface TTTrendsTwitterObjectsUsers2150562175Model : NSObject <NSCopying, NSCoding>

@property (nonatomic, assign) BOOL protected;

@property (nonatomic, assign) BOOL is_translator;

@property (nonatomic, copy) NSString *profile_image_url;

@property (nonatomic, copy) NSString *created_at;

@property (nonatomic, assign) NSInteger id;

@property (nonatomic, assign) BOOL default_profile_image;

@property (nonatomic, assign) NSInteger listed_count;

@property (nonatomic, copy) NSString *profile_background_color;

@property (nonatomic, assign) BOOL follow_request_sent;

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *lang;

@property (nonatomic, copy) NSString *url;

@property (nonatomic, strong) TTTrendsTwitterObjectsUsers2150562175EntitiesModel *entities;

@property (nonatomic, copy) NSString *description1;

@property (nonatomic, assign) BOOL geo_enabled;

@property (nonatomic, assign) NSInteger followers_count;

@property (nonatomic, copy) NSString *profile_text_color;

@property (nonatomic, assign) NSInteger statuses_count;

@property (nonatomic, assign) BOOL notifications;

@property (nonatomic, assign) BOOL following;

@property (nonatomic, assign) BOOL profile_background_tile;

@property (nonatomic, strong) TTTrendsTwitterObjectsUsers2150562175CountsModel *counts;

@property (nonatomic, assign) BOOL profile_use_background_image;

@property (nonatomic, copy) NSString *profile_sidebar_fill_color;

@property (nonatomic, copy) NSString *profile_image_url_https;

@property (nonatomic, assign) BOOL default_profile;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, copy) NSString *profile_sidebar_border_color;

@property (nonatomic, assign) BOOL contributors_enabled;

@property (nonatomic, copy) NSString *id_str;

@property (nonatomic, copy) NSString *profile_banner_url;

@property (nonatomic, copy) NSString *screen_name;

@property (nonatomic, copy) NSString *time_zone;

@property (nonatomic, copy) NSString *profile_background_image_url;

@property (nonatomic, copy) NSString *profile_background_image_url_https;

@property (nonatomic, copy) NSString *profile_link_color;

@property (nonatomic, assign) NSInteger favourites_count;

@property (nonatomic, assign) BOOL is_translation_enabled;

@property (nonatomic, copy) NSString *utc_offset;

@property (nonatomic, assign) NSInteger friends_count;

@property (nonatomic, assign) BOOL verified;

@property (nonatomic, assign) BOOL has_extended_profile;

@end

NS_ASSUME_NONNULL_END
//
//  V2OperationManager.h
//  myV2
//
//  Created by Mac on 16/8/31.
//  Copyright © 2016年 Lneayce. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <AFNetworking.h>

typedef NS_ENUM(NSUInteger, V2DataType) {
    V2DataTypeJSON,
    V2DataTypeHTTP,
    //    <#MyEnumValueC#>,
};


@interface V2OperationTool : NSObject

/**
 *   判断联网     */
+ (BOOL)isConnect;

/**
 *  get 数据
 *
 *  @param URLString  地址
 *  @param parameters 参数
 *  @param success    成功回调 block
 *  @param failure    失败回调 block
 *
 *  @return 请求操作
 */
+ (AFHTTPRequestOperation *)GET:(NSString *)URLString
                       dataType:(V2DataType)type
                     parameters:(id)parameters
                        success:(void (^)(id responseObject))success
                        failure:(void (^)(NSError *error))failure;

/**
 *  get 请求
 *
 *  @param URLString  地址
 *  @param parameters 参数
 *  @param success    成功回调 block
 *  @param failure    失败回调 block
 *
 *  @return 请求操作
 */
+ (AFHTTPRequestOperation *)POST:(NSString *)URLString
                        dataType:(V2DataType)type
                      parameters:(id)parameters
                         success:(void (^)(id responseObject))success
                         failure:(void (^)(NSError *error))failure;
@end

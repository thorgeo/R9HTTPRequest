//
//  R9HTTPRequest.h
//
//  Created by 藤田 泰介 on 12/02/25.
//  Copyright (c) 2012 Revolution 9. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^CompletionBlock)(NSString *responseString);
typedef void(^FailedBlock)(NSError *error);

@interface R9HTTPRequest : NSOperation

@property (copy, nonatomic) CompletionBlock completionBlock;
@property (copy, nonatomic) FailedBlock failedBlock;
@property (strong, nonatomic) NSString *HTTPMethod;
@property (nonatomic) BOOL shouldRedirect;

- (id)initWithURL:(NSURL *)targetUrl;

- (void)addHeader:(NSString *)value forKey:(NSString *)key;

- (void)addBody:(NSString *)value forKey:(NSString *)key;

- (void)setData:(NSData *)data withFileName:(NSString *)fileName andContentType:(NSString *)contentType forKey:(NSString *)key;

@end
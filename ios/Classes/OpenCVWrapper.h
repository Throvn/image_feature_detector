//
//  OpenCVWrapper.h
//  image_feature_detector
//
//  Created by Marco Tschannett on 17.04.19.
//

#import <Foundation/Foundation.h>
#import <opencv2/opencv.hpp>
#include <string>
#include <vector>

NS_ASSUME_NONNULL_BEGIN

@interface OpenCVWrapper : NSObject
+ (NSString *) getVersionString;
+ (NSString *) getBuildInformation;
+ (NSString *) findImageContour: (NSString *) path;
+ (cv::Mat) _grayScale:(cv::Mat)source;
+ (cv::Mat) _loadImage:(NSString *) source;
+ (UIImage *) _matToImage:(cv::Mat) source;
+ (cv::Mat) _gaussianBlur: (cv::Mat)source;
+ (cv::Mat) _adaptiveThreshold: (cv::Mat) source;
@end

NS_ASSUME_NONNULL_END
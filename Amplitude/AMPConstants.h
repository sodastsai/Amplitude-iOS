//
//  AMPConstants.h

NSString *const kAMPLibrary = @"amplitude-ios";
NSString *const kAMPPlatform = @"iOS";
NSString *const kAMPVersion = @"2.3.0";
NSString *const kAMPEventLogUrl = @"https://api.amplitude.com/";
const int kAMPApiVersion = 2;
const int kAMPEventUploadThreshold = 30;
const int kAMPEventUploadMaxBatchSize = 100;
const int kAMPEventMaxCount = 1000;
const int kAMPEventRemoveBatchSize = 20;
const int kAMPEventUploadPeriodSeconds = 30; // 30s
const long kAMPMinTimeBetweenSessionsMillis = 15 * 1000; // 15s
const long kAMPSessionTimeoutMillis = 30 * 60 * 1000; // 30m

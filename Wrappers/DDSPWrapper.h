//
//  DDSPWrapper.h
//  DDSP
//
//  Created by Johanna on 19/04/2023.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

// The interface for the Objective-C++ wrapper class
@interface DDSPWrapper : NSObject

// Define the methods and properties that you want to expose to Swift here.

- (void)processAudioWithParameters:(NSDictionary *)parameters;

// initialize the C++ class:
- (instancetype)initWithSampleRate:(double)sampleRate;

// Similarly, you could define methods to process audio, set parameters, etc.

@end

/* DDSPWrapper_h */

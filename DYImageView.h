//Copyright 2005 Dominic Yu. Some rights reserved.
//This work is licensed under the Creative Commons
//Attribution-NonCommercial-ShareAlike License. To view a copy of this
//license, visit http://creativecommons.org/licenses/by-nc-sa/2.0/ or send
//a letter to Creative Commons, 559 Nathan Abbott Way, Stanford,
//California 94305, USA.

//
//  DYImageView.h
//  creevey
//
//  Created by d on 2005.04.01.
//  Copyright 2005 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface DYImageView : NSView {
	NSImage *image, *transformedImage;
	int rotation;
}

- (void)setImage:(NSImage *)anImage;
- (int)addRotation:(int)r;
- (void)setRotation:(int)n;

@end
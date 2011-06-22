//
//  HelloWorldLayer.h
//  viral
//
//  Created by Manan Patel on 6/12/11.
//  Copyright ngmoco:) 2011. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "Box2D.h"
#import "GLES-Render.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{
	b2World* world;
	GLESDebugDraw *m_debugDraw;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;
// adds a new sprite at a given coordinate
-(void) addNewCircleAtCoords:(CGPoint)p andRadius:(float32)radius;

@end

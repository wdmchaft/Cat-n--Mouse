//
//  Game.h
//  catnmouse
//
//  Created by William Saults on 3/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "cocos2d.h"
#import "Box2D.h"
#import "MyContactListener.h"

@class AppDelegate;

@interface Game : CCLayer <CCStandardTouchDelegate>{
    
    CCArray *bonus, *cats;
    CCLabelBMFont *scoreLabel;
    AppDelegate *delegate;
    CCMenuItemSprite *pauseButton;
    
    double gameTime;
    CGSize s;
    bool isPaused;
    double score;
    
    b2Vec2 gravity;
    b2World *_world;
    b2Body *_groundBody;
    b2Fixture *_bottomFixture;
    
    int numberOfCats;
    
    // Cat 1
    b2FixtureDef cat1ShapeDef;
    b2Fixture *_cat1Fixture;
    
    // Cat 2
    b2FixtureDef cat2ShapeDef;
    b2Fixture *_cat2Fixture;
    
    // Cat 3
    b2FixtureDef cat3ShapeDef;
    b2Fixture *_cat3Fixture;
    
    // Cat 4
    b2FixtureDef cat4ShapeDef;
    b2Fixture *_cat4Fixture;
    
    // Cat 5
    b2FixtureDef cat5ShapeDef;
    b2Fixture *_cat5Fixture;
    
    // Mouse
    b2Body *_mouseBody;
    b2Fixture *_mouseFixture;
    
    b2MouseJoint *_mouseJoint;
    
    MyContactListener *_contactListener;
    
    CCLabelTTF *highScore;
    
}

-(void)pauseGame;
-(void)resumeGame;
-(void)startGame;
-(void)initializeGame;
-(void)mainMenu;
-(void)gameOver;
-(void)playAgain;

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end

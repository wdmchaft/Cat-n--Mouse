//
//  Game.h
//  catnmouse
//
//  Created by William Saults on 3/23/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "cocos2d.h"
#import "Box2D.h"

@class AppDelegate;

@interface Game : CCLayer <CCStandardTouchDelegate>{
    
    CCArray *bonus, *cats;
    CCLabelBMFont *scoreLabel;
    AppDelegate *delegate;
    CCMenuItemSprite *pauseButton;
    
    float timeElapsed;
    CGSize s;
    bool isPaused;
    int score;
    
    b2World *_world;
    b2Body *_groundBody;
    b2Fixture *_bottomFixture;
    b2Fixture *_ballFixture;
    
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
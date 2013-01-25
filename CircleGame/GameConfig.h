//
//  GameConfig.h
//  CircleGame
//
//  Created by Joanne Dyer on 1/19/13.
//
//

#ifndef GameConfig_h
#define GameConfig_h

//TODO Radius should be determined by size of screen.
#define GAME_AREA_X_COORD 2
#define GAME_AREA_Y_COORD 38
#define GAME_AREA_HEIGHT 405
#define GAME_AREA_WIDTH  315
#define SQUARE_SIDE_LENGTH 45
#define COUNTDOWN_BAR_X_COORD 15
#define COUNTDOWN_BAR_Y_COORD 445
#define LIVES_X_COORD 250 //245
#define LIVES_Y_COORD 10 //432
#define LEVEL_X_COORD 205
#define LEVEL_Y_COORD 445
#define LEVEL_WIDTH 60
#define LEVEL_HEIGHT 25
#define TIME_LABEL_OFFSET 70
#define TIME_WIDTH 25
#define TIME_HEIGHT 25
#define NUMBER_OF_ROWS 9
#define NUMBER_OF_COLUMNS 7
#define MAX_RADIUS 25
#define MIN_RADIUS 15.0
#define LOW_COUNTDOWN_PERCENTAGE 10
#define MAX_VALUE_COUNTDOWN 30
#define MIN_VALUE_COUNTDOWN 25
#define MAX_COUNTDOWN 13
#define MIN_COUNTDOWN 10
#define MAX_COOLDOWN 18
#define MIN_COOLDOWN 5
#define NUMBER_OF_SEGMENTS 45
#define CRITICAL_THRESHOLD 0.2 //proportion
#define INNER_CIRCLE_OPACITY 255
#define OUTER_CIRCLE_OPACITY 150
#define OPAQUE 255
#define TRANSPARENT 0
#define HIGH_VALUE_PERCENTAGE 10
#define MEDIUM_VALUE_PERCENTAGE 20
#define NOTIFICATION_LIGHT_ON_COOLDOWN @"LightOnCooldownNotification"
#define SPEED_IN_POINTS_PER_SECOND 120.0
#define PERCENTAGE_OF_LIGHTS_START_ON_COOLDOWN 50
#define INITIAL_COUNTDOWN_SPEED_IN_PERCENTAGE_PER_SECOND 3
#define LEVEL_1_TO_5_COUNTDOWN_SPEED_INCREASE 0.25
#define LEVEL_6_TO_10_COUNTDOWN_SPEED_INCREASE 0.15
#define LEVEL_10_ONWARDS_COUNTDOWN_SPEED_INCREASE 0.1
#define COUNTDOWN_SPEED_RATE_OF_CHANGE 0.005
#define COUNTDOWN_HIGH_INCREASE_PERCENTAGE 25.0
#define COUNTDOWN_BAR_OPACITY 150
#define NUMBER_OF_LIVES 3
#define LEVEL_LENGTH_IN_SECONDS 60

#endif
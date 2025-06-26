/* --- Generated the 9/4/2025 at 8:2 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. jan. 24 11:7:31 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_TYPES_H
#define LINE_FOLLOWER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
typedef enum {
  Line_follower__St_3_WhiteLine,
  Line_follower__St_3_BlackLine
} Line_follower__st_3;

Line_follower__st_3 Line_follower__st_3_of_string(char* s);

char* string_of_Line_follower__st_3(Line_follower__st_3 x, char* buf);

typedef enum {
  Line_follower__St_2_SuccessfullyParked,
  Line_follower__St_2_RightTurnState,
  Line_follower__St_2_ParkOnRight,
  Line_follower__St_2_ParkOnLeft,
  Line_follower__St_2_Obstacle,
  Line_follower__St_2_MoveStraightForRight,
  Line_follower__St_2_MoveStraightForLeft,
  Line_follower__St_2_MoveBack,
  Line_follower__St_2_LeftTurnState,
  Line_follower__St_2_ForwardOnBlack,
  Line_follower__St_2_ForwardBlack,
  Line_follower__St_2_CorrectByPID,
  Line_follower__St_2_CheckParkingSpots
} Line_follower__st_2;

Line_follower__st_2 Line_follower__st_2_of_string(char* s);

char* string_of_Line_follower__st_2(Line_follower__st_2 x, char* buf);

typedef enum {
  Line_follower__St_1_RightTurnState,
  Line_follower__St_1_LeftTurnState,
  Line_follower__St_1_Forward,
  Line_follower__St_1_CorrectByPID
} Line_follower__st_1;

Line_follower__st_1 Line_follower__st_1_of_string(char* s);

char* string_of_Line_follower__st_1(Line_follower__st_1 x, char* buf);

typedef enum {
  Line_follower__St_AvoidanceTurnRightFinal,
  Line_follower__St_AvoidanceTurnRight,
  Line_follower__St_AvoidanceTurnLeftAgain,
  Line_follower__St_AvoidanceTurnLeft,
  Line_follower__St_AvoidanceForwardFinal,
  Line_follower__St_AvoidanceForwardAgain,
  Line_follower__St_AvoidanceForward,
  Line_follower__St_AvoidanceComplete
} Line_follower__st;

Line_follower__st Line_follower__st_of_string(char* s);

char* string_of_Line_follower__st(Line_follower__st x, char* buf);

static const int Line_follower__turn_speed_left = 75;

static const int Line_follower__turn_speed_right = 75;

static const int Line_follower__proportional_gain = 1;

static const int Line_follower__integral_gain = 99;

static const int Line_follower__derivative_gain = 9999;

#endif // LINE_FOLLOWER_TYPES_H

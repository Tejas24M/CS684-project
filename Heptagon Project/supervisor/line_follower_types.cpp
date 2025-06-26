/* --- Generated the 9/4/2025 at 8:2 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. jan. 24 11:7:31 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower_types.h"

Line_follower__st_3 Line_follower__st_3_of_string(char* s) {
  if ((strcmp(s, "St_3_WhiteLine")==0)) {
    return Line_follower__St_3_WhiteLine;
  };
  if ((strcmp(s, "St_3_BlackLine")==0)) {
    return Line_follower__St_3_BlackLine;
  };
}

char* string_of_Line_follower__st_3(Line_follower__st_3 x, char* buf) {
  switch (x) {
    case Line_follower__St_3_WhiteLine:
      strcpy(buf, "St_3_WhiteLine");
      break;
    case Line_follower__St_3_BlackLine:
      strcpy(buf, "St_3_BlackLine");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__st_2 Line_follower__st_2_of_string(char* s) {
  if ((strcmp(s, "St_2_SuccessfullyParked")==0)) {
    return Line_follower__St_2_SuccessfullyParked;
  };
  if ((strcmp(s, "St_2_RightTurnState")==0)) {
    return Line_follower__St_2_RightTurnState;
  };
  if ((strcmp(s, "St_2_ParkOnRight")==0)) {
    return Line_follower__St_2_ParkOnRight;
  };
  if ((strcmp(s, "St_2_ParkOnLeft")==0)) {
    return Line_follower__St_2_ParkOnLeft;
  };
  if ((strcmp(s, "St_2_Obstacle")==0)) {
    return Line_follower__St_2_Obstacle;
  };
  if ((strcmp(s, "St_2_MoveStraightForRight")==0)) {
    return Line_follower__St_2_MoveStraightForRight;
  };
  if ((strcmp(s, "St_2_MoveStraightForLeft")==0)) {
    return Line_follower__St_2_MoveStraightForLeft;
  };
  if ((strcmp(s, "St_2_MoveBack")==0)) {
    return Line_follower__St_2_MoveBack;
  };
  if ((strcmp(s, "St_2_LeftTurnState")==0)) {
    return Line_follower__St_2_LeftTurnState;
  };
  if ((strcmp(s, "St_2_ForwardOnBlack")==0)) {
    return Line_follower__St_2_ForwardOnBlack;
  };
  if ((strcmp(s, "St_2_ForwardBlack")==0)) {
    return Line_follower__St_2_ForwardBlack;
  };
  if ((strcmp(s, "St_2_CorrectByPID")==0)) {
    return Line_follower__St_2_CorrectByPID;
  };
  if ((strcmp(s, "St_2_CheckParkingSpots")==0)) {
    return Line_follower__St_2_CheckParkingSpots;
  };
}

char* string_of_Line_follower__st_2(Line_follower__st_2 x, char* buf) {
  switch (x) {
    case Line_follower__St_2_SuccessfullyParked:
      strcpy(buf, "St_2_SuccessfullyParked");
      break;
    case Line_follower__St_2_RightTurnState:
      strcpy(buf, "St_2_RightTurnState");
      break;
    case Line_follower__St_2_ParkOnRight:
      strcpy(buf, "St_2_ParkOnRight");
      break;
    case Line_follower__St_2_ParkOnLeft:
      strcpy(buf, "St_2_ParkOnLeft");
      break;
    case Line_follower__St_2_Obstacle:
      strcpy(buf, "St_2_Obstacle");
      break;
    case Line_follower__St_2_MoveStraightForRight:
      strcpy(buf, "St_2_MoveStraightForRight");
      break;
    case Line_follower__St_2_MoveStraightForLeft:
      strcpy(buf, "St_2_MoveStraightForLeft");
      break;
    case Line_follower__St_2_MoveBack:
      strcpy(buf, "St_2_MoveBack");
      break;
    case Line_follower__St_2_LeftTurnState:
      strcpy(buf, "St_2_LeftTurnState");
      break;
    case Line_follower__St_2_ForwardOnBlack:
      strcpy(buf, "St_2_ForwardOnBlack");
      break;
    case Line_follower__St_2_ForwardBlack:
      strcpy(buf, "St_2_ForwardBlack");
      break;
    case Line_follower__St_2_CorrectByPID:
      strcpy(buf, "St_2_CorrectByPID");
      break;
    case Line_follower__St_2_CheckParkingSpots:
      strcpy(buf, "St_2_CheckParkingSpots");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__st_1 Line_follower__st_1_of_string(char* s) {
  if ((strcmp(s, "St_1_RightTurnState")==0)) {
    return Line_follower__St_1_RightTurnState;
  };
  if ((strcmp(s, "St_1_LeftTurnState")==0)) {
    return Line_follower__St_1_LeftTurnState;
  };
  if ((strcmp(s, "St_1_Forward")==0)) {
    return Line_follower__St_1_Forward;
  };
  if ((strcmp(s, "St_1_CorrectByPID")==0)) {
    return Line_follower__St_1_CorrectByPID;
  };
}

char* string_of_Line_follower__st_1(Line_follower__st_1 x, char* buf) {
  switch (x) {
    case Line_follower__St_1_RightTurnState:
      strcpy(buf, "St_1_RightTurnState");
      break;
    case Line_follower__St_1_LeftTurnState:
      strcpy(buf, "St_1_LeftTurnState");
      break;
    case Line_follower__St_1_Forward:
      strcpy(buf, "St_1_Forward");
      break;
    case Line_follower__St_1_CorrectByPID:
      strcpy(buf, "St_1_CorrectByPID");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__st Line_follower__st_of_string(char* s) {
  if ((strcmp(s, "St_AvoidanceTurnRightFinal")==0)) {
    return Line_follower__St_AvoidanceTurnRightFinal;
  };
  if ((strcmp(s, "St_AvoidanceTurnRight")==0)) {
    return Line_follower__St_AvoidanceTurnRight;
  };
  if ((strcmp(s, "St_AvoidanceTurnLeftAgain")==0)) {
    return Line_follower__St_AvoidanceTurnLeftAgain;
  };
  if ((strcmp(s, "St_AvoidanceTurnLeft")==0)) {
    return Line_follower__St_AvoidanceTurnLeft;
  };
  if ((strcmp(s, "St_AvoidanceForwardFinal")==0)) {
    return Line_follower__St_AvoidanceForwardFinal;
  };
  if ((strcmp(s, "St_AvoidanceForwardAgain")==0)) {
    return Line_follower__St_AvoidanceForwardAgain;
  };
  if ((strcmp(s, "St_AvoidanceForward")==0)) {
    return Line_follower__St_AvoidanceForward;
  };
  if ((strcmp(s, "St_AvoidanceComplete")==0)) {
    return Line_follower__St_AvoidanceComplete;
  };
}

char* string_of_Line_follower__st(Line_follower__st x, char* buf) {
  switch (x) {
    case Line_follower__St_AvoidanceTurnRightFinal:
      strcpy(buf, "St_AvoidanceTurnRightFinal");
      break;
    case Line_follower__St_AvoidanceTurnRight:
      strcpy(buf, "St_AvoidanceTurnRight");
      break;
    case Line_follower__St_AvoidanceTurnLeftAgain:
      strcpy(buf, "St_AvoidanceTurnLeftAgain");
      break;
    case Line_follower__St_AvoidanceTurnLeft:
      strcpy(buf, "St_AvoidanceTurnLeft");
      break;
    case Line_follower__St_AvoidanceForwardFinal:
      strcpy(buf, "St_AvoidanceForwardFinal");
      break;
    case Line_follower__St_AvoidanceForwardAgain:
      strcpy(buf, "St_AvoidanceForwardAgain");
      break;
    case Line_follower__St_AvoidanceForward:
      strcpy(buf, "St_AvoidanceForward");
      break;
    case Line_follower__St_AvoidanceComplete:
      strcpy(buf, "St_AvoidanceComplete");
      break;
    default:
      break;
  };
  return buf;
}


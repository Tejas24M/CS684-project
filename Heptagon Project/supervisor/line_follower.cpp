/* --- Generated the 9/4/2025 at 8:2 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. jan. 24 11:7:31 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__obstacle_avoid_reset(Line_follower__obstacle_avoid_mem* self) {
  self->v_33 = true;
  self->v_28 = true;
  self->v_23 = true;
  self->v_18 = true;
  self->v_13 = true;
  self->v_8 = true;
  self->v_1 = true;
  self->pnr = false;
  self->ck = Line_follower__St_AvoidanceTurnRight;
}

void Line_follower__obstacle_avoid_step(int forward_left_ir,
                                        int forward_right_ir,
                                        int center_sensor_input,
                                        Line_follower__obstacle_avoid_out* _out,
                                        Line_follower__obstacle_avoid_mem* self) {
  
  int v_4;
  int v_2;
  int v;
  int v_11;
  int v_9;
  int v_7;
  int v_6;
  int v_5;
  int v_16;
  int v_14;
  int v_12;
  int v_21;
  int v_19;
  int v_17;
  int v_26;
  int v_24;
  int v_22;
  int v_31;
  int v_29;
  int v_27;
  int v_36;
  int v_34;
  int v_32;
  int nr_St_AvoidanceComplete;
  Line_follower__st ns_St_AvoidanceComplete;
  int avoidance_state_timer_St_AvoidanceComplete;
  int dir_St_AvoidanceComplete;
  int v_r_St_AvoidanceComplete;
  int v_l_St_AvoidanceComplete;
  int nr_St_AvoidanceTurnRightFinal;
  Line_follower__st ns_St_AvoidanceTurnRightFinal;
  int avoidance_state_timer_St_AvoidanceTurnRightFinal;
  int dir_St_AvoidanceTurnRightFinal;
  int v_r_St_AvoidanceTurnRightFinal;
  int v_l_St_AvoidanceTurnRightFinal;
  int nr_St_AvoidanceForwardFinal;
  Line_follower__st ns_St_AvoidanceForwardFinal;
  int avoidance_state_timer_St_AvoidanceForwardFinal;
  int dir_St_AvoidanceForwardFinal;
  int v_r_St_AvoidanceForwardFinal;
  int v_l_St_AvoidanceForwardFinal;
  int nr_St_AvoidanceTurnLeftAgain;
  Line_follower__st ns_St_AvoidanceTurnLeftAgain;
  int avoidance_state_timer_St_AvoidanceTurnLeftAgain;
  int dir_St_AvoidanceTurnLeftAgain;
  int v_r_St_AvoidanceTurnLeftAgain;
  int v_l_St_AvoidanceTurnLeftAgain;
  int nr_St_AvoidanceForwardAgain;
  Line_follower__st ns_St_AvoidanceForwardAgain;
  int avoidance_state_timer_St_AvoidanceForwardAgain;
  int dir_St_AvoidanceForwardAgain;
  int v_r_St_AvoidanceForwardAgain;
  int v_l_St_AvoidanceForwardAgain;
  int nr_St_AvoidanceTurnLeft;
  Line_follower__st ns_St_AvoidanceTurnLeft;
  int avoidance_state_timer_St_AvoidanceTurnLeft;
  int dir_St_AvoidanceTurnLeft;
  int v_r_St_AvoidanceTurnLeft;
  int v_l_St_AvoidanceTurnLeft;
  int nr_St_AvoidanceForward;
  Line_follower__st ns_St_AvoidanceForward;
  int avoidance_state_timer_St_AvoidanceForward;
  int dir_St_AvoidanceForward;
  int v_r_St_AvoidanceForward;
  int v_l_St_AvoidanceForward;
  int nr_St_AvoidanceTurnRight;
  Line_follower__st ns_St_AvoidanceTurnRight;
  int avoidance_state_timer_St_AvoidanceTurnRight;
  int dir_St_AvoidanceTurnRight;
  int v_r_St_AvoidanceTurnRight;
  int v_l_St_AvoidanceTurnRight;
  Line_follower__st ns;
  int r;
  int nr;
  int avoidance_state_timer;
  r = self->pnr;
  switch (self->ck) {
    case Line_follower__St_AvoidanceTurnRight:
      v_36 = (self->v_35-1);
      if (self->v_33) {
        v_34 = true;
      } else {
        v_34 = r;
      };
      if (v_34) {
        avoidance_state_timer_St_AvoidanceTurnRight = 18;
      } else {
        avoidance_state_timer_St_AvoidanceTurnRight = v_36;
      };
      dir_St_AvoidanceTurnRight = 3;
      v_r_St_AvoidanceTurnRight = 40;
      v_l_St_AvoidanceTurnRight = 40;
      _out->v_l = v_l_St_AvoidanceTurnRight;
      _out->v_r = v_r_St_AvoidanceTurnRight;
      _out->dir = dir_St_AvoidanceTurnRight;
      avoidance_state_timer = avoidance_state_timer_St_AvoidanceTurnRight;
      v_32 = (avoidance_state_timer<=0);
      if (v_32) {
        nr_St_AvoidanceTurnRight = true;
        ns_St_AvoidanceTurnRight = Line_follower__St_AvoidanceForward;
      } else {
        nr_St_AvoidanceTurnRight = false;
        ns_St_AvoidanceTurnRight = Line_follower__St_AvoidanceTurnRight;
      };
      ns = ns_St_AvoidanceTurnRight;
      nr = nr_St_AvoidanceTurnRight;
      self->v_35 = avoidance_state_timer;
      self->v_33 = false;
      break;
    case Line_follower__St_AvoidanceForward:
      v_31 = (self->v_30-1);
      if (self->v_28) {
        v_29 = true;
      } else {
        v_29 = r;
      };
      if (v_29) {
        avoidance_state_timer_St_AvoidanceForward = 50;
      } else {
        avoidance_state_timer_St_AvoidanceForward = v_31;
      };
      dir_St_AvoidanceForward = 1;
      v_r_St_AvoidanceForward = 40;
      v_l_St_AvoidanceForward = 40;
      _out->v_l = v_l_St_AvoidanceForward;
      _out->v_r = v_r_St_AvoidanceForward;
      _out->dir = dir_St_AvoidanceForward;
      avoidance_state_timer = avoidance_state_timer_St_AvoidanceForward;
      v_27 = (avoidance_state_timer<=0);
      if (v_27) {
        nr_St_AvoidanceForward = true;
        ns_St_AvoidanceForward = Line_follower__St_AvoidanceTurnLeft;
      } else {
        nr_St_AvoidanceForward = false;
        ns_St_AvoidanceForward = Line_follower__St_AvoidanceForward;
      };
      ns = ns_St_AvoidanceForward;
      nr = nr_St_AvoidanceForward;
      self->v_30 = avoidance_state_timer;
      self->v_28 = false;
      break;
    case Line_follower__St_AvoidanceTurnLeft:
      v_26 = (self->v_25-1);
      if (self->v_23) {
        v_24 = true;
      } else {
        v_24 = r;
      };
      if (v_24) {
        avoidance_state_timer_St_AvoidanceTurnLeft = 18;
      } else {
        avoidance_state_timer_St_AvoidanceTurnLeft = v_26;
      };
      dir_St_AvoidanceTurnLeft = 2;
      v_r_St_AvoidanceTurnLeft = 40;
      v_l_St_AvoidanceTurnLeft = 40;
      _out->v_l = v_l_St_AvoidanceTurnLeft;
      _out->v_r = v_r_St_AvoidanceTurnLeft;
      _out->dir = dir_St_AvoidanceTurnLeft;
      avoidance_state_timer = avoidance_state_timer_St_AvoidanceTurnLeft;
      v_22 = (avoidance_state_timer<=0);
      if (v_22) {
        nr_St_AvoidanceTurnLeft = true;
        ns_St_AvoidanceTurnLeft = Line_follower__St_AvoidanceForwardAgain;
      } else {
        nr_St_AvoidanceTurnLeft = false;
        ns_St_AvoidanceTurnLeft = Line_follower__St_AvoidanceTurnLeft;
      };
      ns = ns_St_AvoidanceTurnLeft;
      nr = nr_St_AvoidanceTurnLeft;
      self->v_25 = avoidance_state_timer;
      self->v_23 = false;
      break;
    case Line_follower__St_AvoidanceForwardAgain:
      v_21 = (self->v_20-1);
      if (self->v_18) {
        v_19 = true;
      } else {
        v_19 = r;
      };
      if (v_19) {
        avoidance_state_timer_St_AvoidanceForwardAgain = 100;
      } else {
        avoidance_state_timer_St_AvoidanceForwardAgain = v_21;
      };
      dir_St_AvoidanceForwardAgain = 1;
      v_r_St_AvoidanceForwardAgain = 40;
      v_l_St_AvoidanceForwardAgain = 40;
      _out->v_l = v_l_St_AvoidanceForwardAgain;
      _out->v_r = v_r_St_AvoidanceForwardAgain;
      _out->dir = dir_St_AvoidanceForwardAgain;
      avoidance_state_timer = avoidance_state_timer_St_AvoidanceForwardAgain;
      v_17 = (avoidance_state_timer<=0);
      if (v_17) {
        nr_St_AvoidanceForwardAgain = true;
        ns_St_AvoidanceForwardAgain = Line_follower__St_AvoidanceTurnLeftAgain;
      } else {
        nr_St_AvoidanceForwardAgain = false;
        ns_St_AvoidanceForwardAgain = Line_follower__St_AvoidanceForwardAgain;
      };
      ns = ns_St_AvoidanceForwardAgain;
      nr = nr_St_AvoidanceForwardAgain;
      self->v_20 = avoidance_state_timer;
      self->v_18 = false;
      break;
    case Line_follower__St_AvoidanceTurnLeftAgain:
      v_16 = (self->v_15-1);
      if (self->v_13) {
        v_14 = true;
      } else {
        v_14 = r;
      };
      if (v_14) {
        avoidance_state_timer_St_AvoidanceTurnLeftAgain = 18;
      } else {
        avoidance_state_timer_St_AvoidanceTurnLeftAgain = v_16;
      };
      dir_St_AvoidanceTurnLeftAgain = 2;
      v_r_St_AvoidanceTurnLeftAgain = 40;
      v_l_St_AvoidanceTurnLeftAgain = 40;
      _out->v_l = v_l_St_AvoidanceTurnLeftAgain;
      _out->v_r = v_r_St_AvoidanceTurnLeftAgain;
      _out->dir = dir_St_AvoidanceTurnLeftAgain;
      avoidance_state_timer = avoidance_state_timer_St_AvoidanceTurnLeftAgain;
      v_12 = (avoidance_state_timer<=0);
      if (v_12) {
        nr_St_AvoidanceTurnLeftAgain = true;
        ns_St_AvoidanceTurnLeftAgain = Line_follower__St_AvoidanceForwardFinal;
      } else {
        nr_St_AvoidanceTurnLeftAgain = false;
        ns_St_AvoidanceTurnLeftAgain = Line_follower__St_AvoidanceTurnLeftAgain;
      };
      ns = ns_St_AvoidanceTurnLeftAgain;
      nr = nr_St_AvoidanceTurnLeftAgain;
      self->v_15 = avoidance_state_timer;
      self->v_13 = false;
      break;
    case Line_follower__St_AvoidanceForwardFinal:
      dir_St_AvoidanceForwardFinal = 1;
      v_r_St_AvoidanceForwardFinal = 40;
      v_l_St_AvoidanceForwardFinal = 40;
      v_11 = (self->v_10-1);
      if (self->v_8) {
        v_9 = true;
      } else {
        v_9 = r;
      };
      if (v_9) {
        avoidance_state_timer_St_AvoidanceForwardFinal = 30;
      } else {
        avoidance_state_timer_St_AvoidanceForwardFinal = v_11;
      };
      v_5 = (center_sensor_input<700);
      _out->v_l = v_l_St_AvoidanceForwardFinal;
      _out->v_r = v_r_St_AvoidanceForwardFinal;
      _out->dir = dir_St_AvoidanceForwardFinal;
      avoidance_state_timer = avoidance_state_timer_St_AvoidanceForwardFinal;
      v_6 = (avoidance_state_timer<=0);
      v_7 = (v_5&&v_6);
      if (v_7) {
        nr_St_AvoidanceForwardFinal = true;
        ns_St_AvoidanceForwardFinal = Line_follower__St_AvoidanceTurnRightFinal;
      } else {
        nr_St_AvoidanceForwardFinal = false;
        ns_St_AvoidanceForwardFinal = Line_follower__St_AvoidanceForwardFinal;
      };
      ns = ns_St_AvoidanceForwardFinal;
      nr = nr_St_AvoidanceForwardFinal;
      self->v_10 = avoidance_state_timer;
      self->v_8 = false;
      break;
    case Line_follower__St_AvoidanceTurnRightFinal:
      v_4 = (self->v_3-1);
      if (self->v_1) {
        v_2 = true;
      } else {
        v_2 = r;
      };
      if (v_2) {
        avoidance_state_timer_St_AvoidanceTurnRightFinal = 20;
      } else {
        avoidance_state_timer_St_AvoidanceTurnRightFinal = v_4;
      };
      dir_St_AvoidanceTurnRightFinal = 3;
      v_r_St_AvoidanceTurnRightFinal = 40;
      v_l_St_AvoidanceTurnRightFinal = 40;
      _out->v_l = v_l_St_AvoidanceTurnRightFinal;
      _out->v_r = v_r_St_AvoidanceTurnRightFinal;
      _out->dir = dir_St_AvoidanceTurnRightFinal;
      avoidance_state_timer = avoidance_state_timer_St_AvoidanceTurnRightFinal;
      v = (avoidance_state_timer<=0);
      if (v) {
        nr_St_AvoidanceTurnRightFinal = true;
        ns_St_AvoidanceTurnRightFinal = Line_follower__St_AvoidanceComplete;
      } else {
        nr_St_AvoidanceTurnRightFinal = false;
        ns_St_AvoidanceTurnRightFinal = Line_follower__St_AvoidanceTurnRightFinal;
      };
      ns = ns_St_AvoidanceTurnRightFinal;
      nr = nr_St_AvoidanceTurnRightFinal;
      self->v_3 = avoidance_state_timer;
      self->v_1 = false;
      break;
    case Line_follower__St_AvoidanceComplete:
      avoidance_state_timer_St_AvoidanceComplete = self->avoidance_state_timer_1;
      dir_St_AvoidanceComplete = 0;
      v_r_St_AvoidanceComplete = 0;
      v_l_St_AvoidanceComplete = 0;
      nr_St_AvoidanceComplete = false;
      ns_St_AvoidanceComplete = Line_follower__St_AvoidanceComplete;
      _out->v_l = v_l_St_AvoidanceComplete;
      _out->v_r = v_r_St_AvoidanceComplete;
      _out->dir = dir_St_AvoidanceComplete;
      avoidance_state_timer = avoidance_state_timer_St_AvoidanceComplete;
      ns = ns_St_AvoidanceComplete;
      nr = nr_St_AvoidanceComplete;
      break;
    default:
      break;
  };
  self->avoidance_state_timer_1 = avoidance_state_timer;
  self->pnr = nr;
  self->ck = ns;;
}

void Line_follower__pid_reset(Line_follower__pid_mem* self) {
  self->v_39 = true;
  self->v = true;
}

void Line_follower__pid_step(int sensor_input_0, int sensor_input_1,
                             int sensor_input_2, int sensor_input_3,
                             int sensor_input_4,
                             Line_follower__pid_out* _out,
                             Line_follower__pid_mem* self) {
  
  int v_50;
  int v_49;
  int v_48;
  int v_47;
  int v_46;
  int v_45;
  int v_44;
  int v_43;
  int v_42;
  int v_41;
  int v_38;
  int pid_error;
  int integral;
  int proportional;
  int derivative;
  int pid_temp;
  int pid_output;
  if (self->v_39) {
    v_41 = 0;
  } else {
    v_41 = self->v_40;
  };
  pid_error = (sensor_input_1-sensor_input_3);
  derivative = (pid_error-v_41);
  v_45 = (derivative/Line_follower__derivative_gain);
  v_38 = (self->v_37+pid_error);
  if (self->v) {
    integral = 0;
  } else {
    integral = v_38;
  };
  v_43 = (integral/Line_follower__integral_gain);
  proportional = pid_error;
  v_42 = (proportional/Line_follower__proportional_gain);
  v_44 = (v_42+v_43);
  pid_temp = (v_44+v_45);
  v_46 = (pid_temp<0);
  if (v_46) {
    pid_output = -10;
  } else {
    pid_output = 10;
  };
  v_50 = (38+pid_output);
  v_49 = (pid_output==0);
  if (v_49) {
    _out->v_r = 70;
  } else {
    _out->v_r = v_50;
  };
  v_48 = (38-pid_output);
  v_47 = (pid_output==0);
  if (v_47) {
    _out->v_l = 70;
  } else {
    _out->v_l = v_48;
  };
  self->v_40 = pid_error;
  self->v_39 = false;
  self->v_37 = integral;
  self->v = false;;
}

void Line_follower__main_reset(Line_follower__main_mem* self) {
  Line_follower__pid_reset(&self->pid_2);
  Line_follower__pid_reset(&self->pid_1);
  Line_follower__obstacle_avoid_reset(&self->obstacle_avoid);
  Line_follower__pid_reset(&self->pid);
  self->v_209 = true;
  self->v_188 = true;
  self->v_182 = true;
  self->v_176 = true;
  self->v_170 = true;
  self->v_164 = true;
  self->v_158 = true;
  self->left_empty_1 = 0;
  self->right_empty_1 = 0;
  self->pnr_2 = false;
  self->ck = Line_follower__St_3_WhiteLine;
  self->v_286 = false;
  self->v_280 = Line_follower__St_1_Forward;
  self->v_237 = false;
  self->v_156 = Line_follower__St_2_ForwardOnBlack;
}

void Line_follower__main_step(int main_sensor_0, int main_sensor_1,
                              int main_sensor_2, int main_sensor_3,
                              int main_sensor_4, int forward_left_ir,
                              int forward_right_ir, int left_top_ir,
                              int right_top_ir,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Line_follower__obstacle_avoid_out Line_follower__obstacle_avoid_out_st;
  Line_follower__pid_out Line_follower__pid_out_st;
  
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v;
  int r_2_St_3_BlackLine;
  Line_follower__st_3 s_2_St_3_BlackLine;
  int r_2_St_3_WhiteLine;
  Line_follower__st_3 s_2_St_3_WhiteLine;
  int v_97;
  Line_follower__st_2 v_96;
  int v_95;
  Line_follower__st_2 v_94;
  int v_93;
  Line_follower__st_2 v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_116;
  Line_follower__st_2 v_115;
  int v_114;
  Line_follower__st_2 v_113;
  int v_112;
  Line_follower__st_2 v_111;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_101;
  int v_100;
  int v_99;
  int v_98;
  int v_132;
  Line_follower__st_2 v_131;
  int v_130;
  Line_follower__st_2 v_129;
  int v_128;
  Line_follower__st_2 v_127;
  int v_126;
  int v_125;
  int v_124;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_155;
  Line_follower__st_2 v_154;
  int v_153;
  Line_follower__st_2 v_152;
  int v_151;
  Line_follower__st_2 v_150;
  int v_149;
  Line_follower__st_2 v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_140;
  int v_139;
  int v_138;
  int v_137;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int r_1_St_2_SuccessfullyParked;
  Line_follower__st_2 s_1_St_2_SuccessfullyParked;
  int r_1_St_2_MoveBack;
  Line_follower__st_2 s_1_St_2_MoveBack;
  int r_1_St_2_MoveStraightForRight;
  Line_follower__st_2 s_1_St_2_MoveStraightForRight;
  int r_1_St_2_MoveStraightForLeft;
  Line_follower__st_2 s_1_St_2_MoveStraightForLeft;
  int r_1_St_2_ParkOnLeft;
  Line_follower__st_2 s_1_St_2_ParkOnLeft;
  int r_1_St_2_ParkOnRight;
  Line_follower__st_2 s_1_St_2_ParkOnRight;
  int r_1_St_2_ForwardBlack;
  Line_follower__st_2 s_1_St_2_ForwardBlack;
  int r_1_St_2_CheckParkingSpots;
  Line_follower__st_2 s_1_St_2_CheckParkingSpots;
  int r_1_St_2_Obstacle;
  Line_follower__st_2 s_1_St_2_Obstacle;
  int r_1_St_2_RightTurnState;
  Line_follower__st_2 s_1_St_2_RightTurnState;
  int r_1_St_2_LeftTurnState;
  Line_follower__st_2 s_1_St_2_LeftTurnState;
  int r_1_St_2_CorrectByPID;
  Line_follower__st_2 s_1_St_2_CorrectByPID;
  int r_1_St_2_ForwardOnBlack;
  Line_follower__st_2 s_1_St_2_ForwardOnBlack;
  Line_follower__st_2 ck_4;
  int v_162;
  int v_160;
  int v_159;
  int v_157;
  int timer_move_back;
  int v_168;
  int v_166;
  int v_165;
  int v_163;
  int timer_move_straight_1;
  int v_174;
  int v_172;
  int v_171;
  int v_169;
  int timer_move_straight;
  int v_180;
  int v_178;
  int v_177;
  int v_175;
  int timer_park_left;
  int v_186;
  int v_184;
  int v_183;
  int v_181;
  int timer_park_right;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_192;
  int v_190;
  int v_189;
  int v_187;
  int r_3;
  int timer_forward;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_211;
  int v_210;
  int v_208;
  Line_follower__st_2 v_207;
  int v_206;
  Line_follower__st_2 v_205;
  int v_204;
  int v_203;
  int v_202;
  int v_201;
  int v_200;
  int v_199;
  int v_198;
  int timer_parking_check;
  int v_231;
  int v_230;
  int r_4;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int r_5;
  int nr_1_St_2_SuccessfullyParked;
  Line_follower__st_2 ns_1_St_2_SuccessfullyParked;
  int left_empty_St_3_BlackLine_St_2_SuccessfullyParked;
  int right_empty_St_3_BlackLine_St_2_SuccessfullyParked;
  int dir_St_3_BlackLine_St_2_SuccessfullyParked;
  int v_r_St_3_BlackLine_St_2_SuccessfullyParked;
  int v_l_St_3_BlackLine_St_2_SuccessfullyParked;
  int nr_1_St_2_MoveBack;
  Line_follower__st_2 ns_1_St_2_MoveBack;
  int left_empty_St_3_BlackLine_St_2_MoveBack;
  int right_empty_St_3_BlackLine_St_2_MoveBack;
  int dir_St_3_BlackLine_St_2_MoveBack;
  int v_r_St_3_BlackLine_St_2_MoveBack;
  int v_l_St_3_BlackLine_St_2_MoveBack;
  int nr_1_St_2_MoveStraightForRight;
  Line_follower__st_2 ns_1_St_2_MoveStraightForRight;
  int left_empty_St_3_BlackLine_St_2_MoveStraightForRight;
  int right_empty_St_3_BlackLine_St_2_MoveStraightForRight;
  int dir_St_3_BlackLine_St_2_MoveStraightForRight;
  int v_r_St_3_BlackLine_St_2_MoveStraightForRight;
  int v_l_St_3_BlackLine_St_2_MoveStraightForRight;
  int nr_1_St_2_MoveStraightForLeft;
  Line_follower__st_2 ns_1_St_2_MoveStraightForLeft;
  int left_empty_St_3_BlackLine_St_2_MoveStraightForLeft;
  int right_empty_St_3_BlackLine_St_2_MoveStraightForLeft;
  int dir_St_3_BlackLine_St_2_MoveStraightForLeft;
  int v_r_St_3_BlackLine_St_2_MoveStraightForLeft;
  int v_l_St_3_BlackLine_St_2_MoveStraightForLeft;
  int nr_1_St_2_ParkOnLeft;
  Line_follower__st_2 ns_1_St_2_ParkOnLeft;
  int left_empty_St_3_BlackLine_St_2_ParkOnLeft;
  int right_empty_St_3_BlackLine_St_2_ParkOnLeft;
  int dir_St_3_BlackLine_St_2_ParkOnLeft;
  int v_r_St_3_BlackLine_St_2_ParkOnLeft;
  int v_l_St_3_BlackLine_St_2_ParkOnLeft;
  int nr_1_St_2_ParkOnRight;
  Line_follower__st_2 ns_1_St_2_ParkOnRight;
  int left_empty_St_3_BlackLine_St_2_ParkOnRight;
  int right_empty_St_3_BlackLine_St_2_ParkOnRight;
  int dir_St_3_BlackLine_St_2_ParkOnRight;
  int v_r_St_3_BlackLine_St_2_ParkOnRight;
  int v_l_St_3_BlackLine_St_2_ParkOnRight;
  int nr_1_St_2_ForwardBlack;
  Line_follower__st_2 ns_1_St_2_ForwardBlack;
  int left_empty_St_3_BlackLine_St_2_ForwardBlack;
  int right_empty_St_3_BlackLine_St_2_ForwardBlack;
  int dir_St_3_BlackLine_St_2_ForwardBlack;
  int v_r_St_3_BlackLine_St_2_ForwardBlack;
  int v_l_St_3_BlackLine_St_2_ForwardBlack;
  int nr_1_St_2_CheckParkingSpots;
  Line_follower__st_2 ns_1_St_2_CheckParkingSpots;
  int left_empty_St_3_BlackLine_St_2_CheckParkingSpots;
  int right_empty_St_3_BlackLine_St_2_CheckParkingSpots;
  int dir_St_3_BlackLine_St_2_CheckParkingSpots;
  int v_r_St_3_BlackLine_St_2_CheckParkingSpots;
  int v_l_St_3_BlackLine_St_2_CheckParkingSpots;
  int nr_1_St_2_Obstacle;
  Line_follower__st_2 ns_1_St_2_Obstacle;
  int left_empty_St_3_BlackLine_St_2_Obstacle;
  int right_empty_St_3_BlackLine_St_2_Obstacle;
  int dir_St_3_BlackLine_St_2_Obstacle;
  int v_r_St_3_BlackLine_St_2_Obstacle;
  int v_l_St_3_BlackLine_St_2_Obstacle;
  int nr_1_St_2_RightTurnState;
  Line_follower__st_2 ns_1_St_2_RightTurnState;
  int left_empty_St_3_BlackLine_St_2_RightTurnState;
  int right_empty_St_3_BlackLine_St_2_RightTurnState;
  int dir_St_3_BlackLine_St_2_RightTurnState;
  int v_r_St_3_BlackLine_St_2_RightTurnState;
  int v_l_St_3_BlackLine_St_2_RightTurnState;
  int nr_1_St_2_LeftTurnState;
  Line_follower__st_2 ns_1_St_2_LeftTurnState;
  int left_empty_St_3_BlackLine_St_2_LeftTurnState;
  int right_empty_St_3_BlackLine_St_2_LeftTurnState;
  int dir_St_3_BlackLine_St_2_LeftTurnState;
  int v_r_St_3_BlackLine_St_2_LeftTurnState;
  int v_l_St_3_BlackLine_St_2_LeftTurnState;
  int nr_1_St_2_CorrectByPID;
  Line_follower__st_2 ns_1_St_2_CorrectByPID;
  int left_empty_St_3_BlackLine_St_2_CorrectByPID;
  int right_empty_St_3_BlackLine_St_2_CorrectByPID;
  int dir_St_3_BlackLine_St_2_CorrectByPID;
  int v_r_St_3_BlackLine_St_2_CorrectByPID;
  int v_l_St_3_BlackLine_St_2_CorrectByPID;
  int nr_1_St_2_ForwardOnBlack;
  Line_follower__st_2 ns_1_St_2_ForwardOnBlack;
  int left_empty_St_3_BlackLine_St_2_ForwardOnBlack;
  int right_empty_St_3_BlackLine_St_2_ForwardOnBlack;
  int dir_St_3_BlackLine_St_2_ForwardOnBlack;
  int v_r_St_3_BlackLine_St_2_ForwardOnBlack;
  int v_l_St_3_BlackLine_St_2_ForwardOnBlack;
  Line_follower__st_2 ck_5;
  Line_follower__st_2 s_1;
  Line_follower__st_2 ns_1;
  int r_1;
  int nr_1;
  int pnr_1;
  int v_251;
  Line_follower__st_1 v_250;
  int v_249;
  int v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_260;
  Line_follower__st_1 v_259;
  int v_258;
  int v_257;
  int v_256;
  int v_255;
  int v_254;
  int v_253;
  int v_252;
  int v_266;
  Line_follower__st_1 v_265;
  int v_264;
  int v_263;
  int v_262;
  int v_261;
  int v_279;
  Line_follower__st_1 v_278;
  int v_277;
  Line_follower__st_1 v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_270;
  int v_269;
  int v_268;
  int v_267;
  int r_St_1_RightTurnState;
  Line_follower__st_1 s_St_1_RightTurnState;
  int r_St_1_LeftTurnState;
  Line_follower__st_1 s_St_1_LeftTurnState;
  int r_St_1_CorrectByPID;
  Line_follower__st_1 s_St_1_CorrectByPID;
  int r_St_1_Forward;
  Line_follower__st_1 s_St_1_Forward;
  Line_follower__st_1 ck_2;
  int v_285;
  int v_284;
  int v_283;
  int v_282;
  int v_281;
  int r_6;
  int nr_St_1_RightTurnState;
  Line_follower__st_1 ns_St_1_RightTurnState;
  int dir_St_3_WhiteLine_St_1_RightTurnState;
  int v_r_St_3_WhiteLine_St_1_RightTurnState;
  int v_l_St_3_WhiteLine_St_1_RightTurnState;
  int nr_St_1_LeftTurnState;
  Line_follower__st_1 ns_St_1_LeftTurnState;
  int dir_St_3_WhiteLine_St_1_LeftTurnState;
  int v_r_St_3_WhiteLine_St_1_LeftTurnState;
  int v_l_St_3_WhiteLine_St_1_LeftTurnState;
  int nr_St_1_CorrectByPID;
  Line_follower__st_1 ns_St_1_CorrectByPID;
  int dir_St_3_WhiteLine_St_1_CorrectByPID;
  int v_r_St_3_WhiteLine_St_1_CorrectByPID;
  int v_l_St_3_WhiteLine_St_1_CorrectByPID;
  int nr_St_1_Forward;
  Line_follower__st_1 ns_St_1_Forward;
  int dir_St_3_WhiteLine_St_1_Forward;
  int v_r_St_3_WhiteLine_St_1_Forward;
  int v_l_St_3_WhiteLine_St_1_Forward;
  Line_follower__st_1 ck_3;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  Line_follower__st_1 s;
  Line_follower__st_1 ns;
  int r;
  int nr;
  int pnr;
  int nr_2_St_3_BlackLine;
  Line_follower__st_3 ns_2_St_3_BlackLine;
  int left_empty_St_3_BlackLine;
  int right_empty_St_3_BlackLine;
  int sensor_data_St_3_BlackLine[5];
  int dir_St_3_BlackLine;
  int v_r_St_3_BlackLine;
  int v_l_St_3_BlackLine;
  int nr_2_St_3_WhiteLine;
  Line_follower__st_3 ns_2_St_3_WhiteLine;
  int left_empty_St_3_WhiteLine;
  int right_empty_St_3_WhiteLine;
  int sensor_data_St_3_WhiteLine[5];
  int dir_St_3_WhiteLine;
  int v_r_St_3_WhiteLine;
  int v_l_St_3_WhiteLine;
  Line_follower__st_3 ck_1;
  Line_follower__st_3 s_2;
  Line_follower__st_3 ns_2;
  int r_2;
  int nr_2;
  int sensor_data[5];
  int right_empty;
  int left_empty;
  switch (self->ck) {
    case Line_follower__St_3_WhiteLine:
      v_76 = (main_sensor_4>600);
      v_74 = (main_sensor_3<600);
      v_72 = (main_sensor_2>600);
      v_70 = (main_sensor_1>600);
      v_69 = (main_sensor_0>600);
      v_71 = (v_69&&v_70);
      v_73 = (v_71&&v_72);
      v_75 = (v_73&&v_74);
      v_77 = (v_75&&v_76);
      v_66 = (main_sensor_4>600);
      v_64 = (main_sensor_3>600);
      v_62 = (main_sensor_2>600);
      v_60 = (main_sensor_1<600);
      v_59 = (main_sensor_0>600);
      v_61 = (v_59&&v_60);
      v_63 = (v_61&&v_62);
      v_65 = (v_63&&v_64);
      v_67 = (v_65&&v_66);
      v_57 = (main_sensor_4>600);
      v_55 = (main_sensor_3>600);
      v_53 = (main_sensor_2<600);
      v_51 = (main_sensor_1>600);
      v = (main_sensor_0>600);
      v_52 = (v&&v_51);
      v_54 = (v_52&&v_53);
      v_56 = (v_54&&v_55);
      v_58 = (v_56&&v_57);
      v_68 = (v_58||v_67);
      v_78 = (v_68||v_77);
      if (v_78) {
        r_2_St_3_WhiteLine = true;
        s_2_St_3_WhiteLine = Line_follower__St_3_BlackLine;
      } else {
        r_2_St_3_WhiteLine = self->pnr_2;
        s_2_St_3_WhiteLine = Line_follower__St_3_WhiteLine;
      };
      s_2 = s_2_St_3_WhiteLine;
      r_2 = r_2_St_3_WhiteLine;
      break;
    case Line_follower__St_3_BlackLine:
      r_2_St_3_BlackLine = self->pnr_2;
      s_2_St_3_BlackLine = Line_follower__St_3_BlackLine;
      s_2 = s_2_St_3_BlackLine;
      r_2 = r_2_St_3_BlackLine;
      break;
    default:
      break;
  };
  ck_1 = s_2;
  switch (ck_1) {
    case Line_follower__St_3_WhiteLine:
      left_empty_St_3_WhiteLine = self->left_empty_1;
      right_empty_St_3_WhiteLine = self->right_empty_1;
      if (r_2) {
        pnr = false;
        ck_2 = Line_follower__St_1_Forward;
      } else {
        pnr = self->v_286;
        ck_2 = self->v_280;
      };
      v_242 = (1023-main_sensor_4);
      v_241 = (1023-main_sensor_3);
      v_240 = (1023-main_sensor_2);
      v_239 = (1023-main_sensor_1);
      v_238 = (1023-main_sensor_0);
      nr_2_St_3_WhiteLine = false;
      ns_2_St_3_WhiteLine = Line_follower__St_3_WhiteLine;
      ns_2 = ns_2_St_3_WhiteLine;
      nr_2 = nr_2_St_3_WhiteLine;
      sensor_data_St_3_WhiteLine[0] = v_238;
      sensor_data_St_3_WhiteLine[1] = v_239;
      sensor_data_St_3_WhiteLine[2] = v_240;
      sensor_data_St_3_WhiteLine[3] = v_241;
      sensor_data_St_3_WhiteLine[4] = v_242;
      {
        int _4;
        for (_4 = 0; _4 < 5; ++_4) {
          sensor_data[_4] = sensor_data_St_3_WhiteLine[_4];
        }
      };
      switch (ck_2) {
        case Line_follower__St_1_Forward:
          v_274 = sensor_data[4];
          v_275 = (v_274<500);
          if (v_275) {
            v_277 = true;
            v_276 = Line_follower__St_1_RightTurnState;
          } else {
            v_277 = pnr;
            v_276 = Line_follower__St_1_Forward;
          };
          v_272 = sensor_data[0];
          v_273 = (v_272<500);
          if (v_273) {
            v_279 = true;
            v_278 = Line_follower__St_1_LeftTurnState;
          } else {
            v_279 = v_277;
            v_278 = v_276;
          };
          v_269 = sensor_data[3];
          v_270 = (v_269<500);
          v_267 = sensor_data[1];
          v_268 = (v_267<500);
          v_271 = (v_268||v_270);
          if (v_271) {
            r_St_1_Forward = true;
            s_St_1_Forward = Line_follower__St_1_CorrectByPID;
          } else {
            r_St_1_Forward = v_279;
            s_St_1_Forward = v_278;
          };
          s = s_St_1_Forward;
          r = r_St_1_Forward;
          break;
        case Line_follower__St_1_CorrectByPID:
          v_263 = sensor_data[4];
          v_264 = (v_263<500);
          if (v_264) {
            v_266 = true;
            v_265 = Line_follower__St_1_RightTurnState;
          } else {
            v_266 = pnr;
            v_265 = Line_follower__St_1_CorrectByPID;
          };
          v_261 = sensor_data[0];
          v_262 = (v_261<500);
          if (v_262) {
            r_St_1_CorrectByPID = true;
            s_St_1_CorrectByPID = Line_follower__St_1_LeftTurnState;
          } else {
            r_St_1_CorrectByPID = v_266;
            s_St_1_CorrectByPID = v_265;
          };
          s = s_St_1_CorrectByPID;
          r = r_St_1_CorrectByPID;
          break;
        case Line_follower__St_1_LeftTurnState:
          v_257 = sensor_data[4];
          v_258 = (v_257<500);
          if (v_258) {
            v_260 = true;
            v_259 = Line_follower__St_1_RightTurnState;
          } else {
            v_260 = pnr;
            v_259 = Line_follower__St_1_LeftTurnState;
          };
          v_254 = sensor_data[3];
          v_255 = (v_254<500);
          v_252 = sensor_data[1];
          v_253 = (v_252<500);
          v_256 = (v_253||v_255);
          if (v_256) {
            r_St_1_LeftTurnState = true;
            s_St_1_LeftTurnState = Line_follower__St_1_CorrectByPID;
          } else {
            r_St_1_LeftTurnState = v_260;
            s_St_1_LeftTurnState = v_259;
          };
          s = s_St_1_LeftTurnState;
          r = r_St_1_LeftTurnState;
          break;
        case Line_follower__St_1_RightTurnState:
          v_248 = sensor_data[0];
          v_249 = (v_248<500);
          if (v_249) {
            v_251 = true;
            v_250 = Line_follower__St_1_LeftTurnState;
          } else {
            v_251 = pnr;
            v_250 = Line_follower__St_1_RightTurnState;
          };
          v_245 = sensor_data[3];
          v_246 = (v_245<500);
          v_243 = sensor_data[1];
          v_244 = (v_243<500);
          v_247 = (v_244||v_246);
          if (v_247) {
            r_St_1_RightTurnState = true;
            s_St_1_RightTurnState = Line_follower__St_1_CorrectByPID;
          } else {
            r_St_1_RightTurnState = v_251;
            s_St_1_RightTurnState = v_250;
          };
          s = s_St_1_RightTurnState;
          r = r_St_1_RightTurnState;
          break;
        default:
          break;
      };
      ck_3 = s;
      switch (ck_3) {
        case Line_follower__St_1_Forward:
          v_r_St_3_WhiteLine_St_1_Forward = 55;
          v_l_St_3_WhiteLine_St_1_Forward = 55;
          dir_St_3_WhiteLine_St_1_Forward = 1;
          nr_St_1_Forward = false;
          ns_St_1_Forward = Line_follower__St_1_Forward;
          v_l_St_3_WhiteLine = v_l_St_3_WhiteLine_St_1_Forward;
          v_r_St_3_WhiteLine = v_r_St_3_WhiteLine_St_1_Forward;
          dir_St_3_WhiteLine = dir_St_3_WhiteLine_St_1_Forward;
          ns = ns_St_1_Forward;
          nr = nr_St_1_Forward;
          break;
        case Line_follower__St_1_CorrectByPID:
          v_285 = sensor_data[4];
          v_284 = sensor_data[3];
          v_283 = sensor_data[2];
          v_282 = sensor_data[1];
          v_281 = sensor_data[0];
          dir_St_3_WhiteLine_St_1_CorrectByPID = 1;
          nr_St_1_CorrectByPID = false;
          ns_St_1_CorrectByPID = Line_follower__St_1_CorrectByPID;
          r_6 = (r_2||r);
          if (r_6) {
            Line_follower__pid_reset(&self->pid_2);
          };
          Line_follower__pid_step(v_281, v_282, v_283, v_284, v_285,
                                  &Line_follower__pid_out_st, &self->pid_2);
          v_l_St_3_WhiteLine_St_1_CorrectByPID = Line_follower__pid_out_st.v_l;
          v_r_St_3_WhiteLine_St_1_CorrectByPID = Line_follower__pid_out_st.v_r;
          v_l_St_3_WhiteLine = v_l_St_3_WhiteLine_St_1_CorrectByPID;
          v_r_St_3_WhiteLine = v_r_St_3_WhiteLine_St_1_CorrectByPID;
          dir_St_3_WhiteLine = dir_St_3_WhiteLine_St_1_CorrectByPID;
          ns = ns_St_1_CorrectByPID;
          nr = nr_St_1_CorrectByPID;
          break;
        case Line_follower__St_1_LeftTurnState:
          v_r_St_3_WhiteLine_St_1_LeftTurnState = 75;
          v_l_St_3_WhiteLine_St_1_LeftTurnState = 75;
          dir_St_3_WhiteLine_St_1_LeftTurnState = 2;
          nr_St_1_LeftTurnState = false;
          ns_St_1_LeftTurnState = Line_follower__St_1_LeftTurnState;
          v_l_St_3_WhiteLine = v_l_St_3_WhiteLine_St_1_LeftTurnState;
          v_r_St_3_WhiteLine = v_r_St_3_WhiteLine_St_1_LeftTurnState;
          dir_St_3_WhiteLine = dir_St_3_WhiteLine_St_1_LeftTurnState;
          ns = ns_St_1_LeftTurnState;
          nr = nr_St_1_LeftTurnState;
          break;
        case Line_follower__St_1_RightTurnState:
          v_r_St_3_WhiteLine_St_1_RightTurnState = 75;
          v_l_St_3_WhiteLine_St_1_RightTurnState = 75;
          dir_St_3_WhiteLine_St_1_RightTurnState = 3;
          nr_St_1_RightTurnState = false;
          ns_St_1_RightTurnState = Line_follower__St_1_RightTurnState;
          v_l_St_3_WhiteLine = v_l_St_3_WhiteLine_St_1_RightTurnState;
          v_r_St_3_WhiteLine = v_r_St_3_WhiteLine_St_1_RightTurnState;
          dir_St_3_WhiteLine = dir_St_3_WhiteLine_St_1_RightTurnState;
          ns = ns_St_1_RightTurnState;
          nr = nr_St_1_RightTurnState;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_3_WhiteLine;
      _out->v_r = v_r_St_3_WhiteLine;
      _out->dir = dir_St_3_WhiteLine;
      right_empty = right_empty_St_3_WhiteLine;
      left_empty = left_empty_St_3_WhiteLine;
      break;
    case Line_follower__St_3_BlackLine:
      if (r_2) {
        pnr_1 = false;
        ck_4 = Line_follower__St_2_ForwardOnBlack;
      } else {
        pnr_1 = self->v_237;
        ck_4 = self->v_156;
      };
      nr_2_St_3_BlackLine = false;
      ns_2_St_3_BlackLine = Line_follower__St_3_BlackLine;
      ns_2 = ns_2_St_3_BlackLine;
      nr_2 = nr_2_St_3_BlackLine;
      switch (ck_4) {
        case Line_follower__St_2_ForwardOnBlack:
          v_146 = (right_top_ir==0);
          v_145 = (left_top_ir==0);
          v_147 = (v_145||v_146);
          if (v_147) {
            v_149 = true;
            v_148 = Line_follower__St_2_CheckParkingSpots;
          } else {
            v_149 = pnr_1;
            v_148 = Line_follower__St_2_ForwardOnBlack;
          };
          v_143 = (forward_right_ir==1);
          v_142 = (forward_left_ir==1);
          v_144 = (v_142||v_143);
          if (v_144) {
            v_151 = true;
            v_150 = Line_follower__St_2_Obstacle;
          } else {
            v_151 = v_149;
            v_150 = v_148;
          };
          break;
        case Line_follower__St_2_CorrectByPID:
          v_125 = (right_top_ir==0);
          v_124 = (left_top_ir==0);
          v_126 = (v_124||v_125);
          if (v_126) {
            v_128 = true;
            v_127 = Line_follower__St_2_CheckParkingSpots;
          } else {
            v_128 = pnr_1;
            v_127 = Line_follower__St_2_CorrectByPID;
          };
          v_122 = (forward_right_ir==1);
          v_121 = (forward_left_ir==1);
          v_123 = (v_121||v_122);
          if (v_123) {
            v_130 = true;
            v_129 = Line_follower__St_2_Obstacle;
          } else {
            v_130 = v_128;
            v_129 = v_127;
          };
          break;
        case Line_follower__St_2_LeftTurnState:
          v_109 = (right_top_ir==0);
          v_108 = (left_top_ir==0);
          v_110 = (v_108||v_109);
          if (v_110) {
            v_112 = true;
            v_111 = Line_follower__St_2_CheckParkingSpots;
          } else {
            v_112 = pnr_1;
            v_111 = Line_follower__St_2_LeftTurnState;
          };
          v_106 = (forward_right_ir==1);
          v_105 = (forward_left_ir==1);
          v_107 = (v_105||v_106);
          if (v_107) {
            v_114 = true;
            v_113 = Line_follower__St_2_Obstacle;
          } else {
            v_114 = v_112;
            v_113 = v_111;
          };
          break;
        case Line_follower__St_2_RightTurnState:
          v_90 = (right_top_ir==0);
          v_89 = (left_top_ir==0);
          v_91 = (v_89||v_90);
          if (v_91) {
            v_93 = true;
            v_92 = Line_follower__St_2_CheckParkingSpots;
          } else {
            v_93 = pnr_1;
            v_92 = Line_follower__St_2_RightTurnState;
          };
          v_87 = (forward_right_ir==1);
          v_86 = (forward_left_ir==1);
          v_88 = (v_86||v_87);
          if (v_88) {
            v_95 = true;
            v_94 = Line_follower__St_2_Obstacle;
          } else {
            v_95 = v_93;
            v_94 = v_92;
          };
          break;
        case Line_follower__St_2_Obstacle:
          r_1_St_2_Obstacle = pnr_1;
          s_1_St_2_Obstacle = Line_follower__St_2_Obstacle;
          break;
        case Line_follower__St_2_CheckParkingSpots:
          r_1_St_2_CheckParkingSpots = pnr_1;
          s_1_St_2_CheckParkingSpots = Line_follower__St_2_CheckParkingSpots;
          break;
        case Line_follower__St_2_ForwardBlack:
          r_1_St_2_ForwardBlack = pnr_1;
          s_1_St_2_ForwardBlack = Line_follower__St_2_ForwardBlack;
          break;
        case Line_follower__St_2_ParkOnRight:
          r_1_St_2_ParkOnRight = pnr_1;
          s_1_St_2_ParkOnRight = Line_follower__St_2_ParkOnRight;
          break;
        case Line_follower__St_2_ParkOnLeft:
          r_1_St_2_ParkOnLeft = pnr_1;
          s_1_St_2_ParkOnLeft = Line_follower__St_2_ParkOnLeft;
          break;
        case Line_follower__St_2_MoveStraightForLeft:
          r_1_St_2_MoveStraightForLeft = pnr_1;
          s_1_St_2_MoveStraightForLeft = Line_follower__St_2_MoveStraightForLeft;
          break;
        case Line_follower__St_2_MoveStraightForRight:
          r_1_St_2_MoveStraightForRight = pnr_1;
          s_1_St_2_MoveStraightForRight = Line_follower__St_2_MoveStraightForRight;
          break;
        case Line_follower__St_2_MoveBack:
          r_1_St_2_MoveBack = pnr_1;
          s_1_St_2_MoveBack = Line_follower__St_2_MoveBack;
          break;
        case Line_follower__St_2_SuccessfullyParked:
          r_1_St_2_SuccessfullyParked = pnr_1;
          s_1_St_2_SuccessfullyParked = Line_follower__St_2_SuccessfullyParked;
          break;
        default:
          break;
      };
      sensor_data_St_3_BlackLine[0] = main_sensor_0;
      sensor_data_St_3_BlackLine[1] = main_sensor_1;
      sensor_data_St_3_BlackLine[2] = main_sensor_2;
      sensor_data_St_3_BlackLine[3] = main_sensor_3;
      sensor_data_St_3_BlackLine[4] = main_sensor_4;
      {
        int _5;
        for (_5 = 0; _5 < 5; ++_5) {
          sensor_data[_5] = sensor_data_St_3_BlackLine[_5];
        }
      };
      switch (ck_4) {
        case Line_follower__St_2_ForwardOnBlack:
          v_140 = sensor_data[4];
          v_141 = (v_140<500);
          if (v_141) {
            v_153 = true;
            v_152 = Line_follower__St_2_RightTurnState;
          } else {
            v_153 = v_151;
            v_152 = v_150;
          };
          v_138 = sensor_data[0];
          v_139 = (v_138<500);
          if (v_139) {
            v_155 = true;
            v_154 = Line_follower__St_2_LeftTurnState;
          } else {
            v_155 = v_153;
            v_154 = v_152;
          };
          v_135 = sensor_data[3];
          v_136 = (v_135<500);
          v_133 = sensor_data[1];
          v_134 = (v_133<650);
          v_137 = (v_134||v_136);
          if (v_137) {
            r_1_St_2_ForwardOnBlack = true;
            s_1_St_2_ForwardOnBlack = Line_follower__St_2_CorrectByPID;
          } else {
            r_1_St_2_ForwardOnBlack = v_155;
            s_1_St_2_ForwardOnBlack = v_154;
          };
          s_1 = s_1_St_2_ForwardOnBlack;
          r_1 = r_1_St_2_ForwardOnBlack;
          break;
        case Line_follower__St_2_CorrectByPID:
          v_119 = sensor_data[4];
          v_120 = (v_119<500);
          if (v_120) {
            v_132 = true;
            v_131 = Line_follower__St_2_RightTurnState;
          } else {
            v_132 = v_130;
            v_131 = v_129;
          };
          v_117 = sensor_data[0];
          v_118 = (v_117<500);
          if (v_118) {
            r_1_St_2_CorrectByPID = true;
            s_1_St_2_CorrectByPID = Line_follower__St_2_LeftTurnState;
          } else {
            r_1_St_2_CorrectByPID = v_132;
            s_1_St_2_CorrectByPID = v_131;
          };
          s_1 = s_1_St_2_CorrectByPID;
          r_1 = r_1_St_2_CorrectByPID;
          break;
        case Line_follower__St_2_LeftTurnState:
          v_103 = sensor_data[4];
          v_104 = (v_103<500);
          if (v_104) {
            v_116 = true;
            v_115 = Line_follower__St_2_RightTurnState;
          } else {
            v_116 = v_114;
            v_115 = v_113;
          };
          v_100 = sensor_data[3];
          v_101 = (v_100<500);
          v_98 = sensor_data[1];
          v_99 = (v_98<650);
          v_102 = (v_99||v_101);
          if (v_102) {
            r_1_St_2_LeftTurnState = true;
            s_1_St_2_LeftTurnState = Line_follower__St_2_CorrectByPID;
          } else {
            r_1_St_2_LeftTurnState = v_116;
            s_1_St_2_LeftTurnState = v_115;
          };
          s_1 = s_1_St_2_LeftTurnState;
          r_1 = r_1_St_2_LeftTurnState;
          break;
        case Line_follower__St_2_RightTurnState:
          v_84 = sensor_data[0];
          v_85 = (v_84<500);
          if (v_85) {
            v_97 = true;
            v_96 = Line_follower__St_2_LeftTurnState;
          } else {
            v_97 = v_95;
            v_96 = v_94;
          };
          v_81 = sensor_data[3];
          v_82 = (v_81<600);
          v_79 = sensor_data[1];
          v_80 = (v_79<650);
          v_83 = (v_80||v_82);
          if (v_83) {
            r_1_St_2_RightTurnState = true;
            s_1_St_2_RightTurnState = Line_follower__St_2_CorrectByPID;
          } else {
            r_1_St_2_RightTurnState = v_97;
            s_1_St_2_RightTurnState = v_96;
          };
          s_1 = s_1_St_2_RightTurnState;
          r_1 = r_1_St_2_RightTurnState;
          break;
        case Line_follower__St_2_SuccessfullyParked:
          s_1 = s_1_St_2_SuccessfullyParked;
          r_1 = r_1_St_2_SuccessfullyParked;
          break;
        case Line_follower__St_2_MoveBack:
          s_1 = s_1_St_2_MoveBack;
          r_1 = r_1_St_2_MoveBack;
          break;
        case Line_follower__St_2_MoveStraightForRight:
          s_1 = s_1_St_2_MoveStraightForRight;
          r_1 = r_1_St_2_MoveStraightForRight;
          break;
        case Line_follower__St_2_MoveStraightForLeft:
          s_1 = s_1_St_2_MoveStraightForLeft;
          r_1 = r_1_St_2_MoveStraightForLeft;
          break;
        case Line_follower__St_2_ParkOnLeft:
          s_1 = s_1_St_2_ParkOnLeft;
          r_1 = r_1_St_2_ParkOnLeft;
          break;
        case Line_follower__St_2_ParkOnRight:
          s_1 = s_1_St_2_ParkOnRight;
          r_1 = r_1_St_2_ParkOnRight;
          break;
        case Line_follower__St_2_ForwardBlack:
          s_1 = s_1_St_2_ForwardBlack;
          r_1 = r_1_St_2_ForwardBlack;
          break;
        case Line_follower__St_2_CheckParkingSpots:
          s_1 = s_1_St_2_CheckParkingSpots;
          r_1 = r_1_St_2_CheckParkingSpots;
          break;
        case Line_follower__St_2_Obstacle:
          s_1 = s_1_St_2_Obstacle;
          r_1 = r_1_St_2_Obstacle;
          break;
        default:
          break;
      };
      ck_5 = s_1;
      switch (ck_5) {
        case Line_follower__St_2_ForwardOnBlack:
          left_empty_St_3_BlackLine_St_2_ForwardOnBlack = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_ForwardOnBlack = self->right_empty_1;
          v_r_St_3_BlackLine_St_2_ForwardOnBlack = 55;
          v_l_St_3_BlackLine_St_2_ForwardOnBlack = 55;
          dir_St_3_BlackLine_St_2_ForwardOnBlack = 1;
          nr_1_St_2_ForwardOnBlack = false;
          ns_1_St_2_ForwardOnBlack = Line_follower__St_2_ForwardOnBlack;
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_ForwardOnBlack;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_ForwardOnBlack;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_ForwardOnBlack;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_ForwardOnBlack;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_ForwardOnBlack;
          break;
        case Line_follower__St_2_CorrectByPID:
          left_empty_St_3_BlackLine_St_2_CorrectByPID = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_CorrectByPID = self->right_empty_1;
          v_236 = sensor_data[4];
          v_235 = sensor_data[3];
          v_234 = sensor_data[2];
          v_233 = sensor_data[1];
          v_232 = sensor_data[0];
          dir_St_3_BlackLine_St_2_CorrectByPID = 1;
          nr_1_St_2_CorrectByPID = false;
          ns_1_St_2_CorrectByPID = Line_follower__St_2_CorrectByPID;
          r_5 = (r_2||r_1);
          if (r_5) {
            Line_follower__pid_reset(&self->pid_1);
          };
          Line_follower__pid_step(v_232, v_233, v_234, v_235, v_236,
                                  &Line_follower__pid_out_st, &self->pid_1);
          v_l_St_3_BlackLine_St_2_CorrectByPID = Line_follower__pid_out_st.v_l;
          v_r_St_3_BlackLine_St_2_CorrectByPID = Line_follower__pid_out_st.v_r;
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_CorrectByPID;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_CorrectByPID;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_CorrectByPID;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_CorrectByPID;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_CorrectByPID;
          break;
        case Line_follower__St_2_LeftTurnState:
          left_empty_St_3_BlackLine_St_2_LeftTurnState = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_LeftTurnState = self->right_empty_1;
          v_r_St_3_BlackLine_St_2_LeftTurnState = 75;
          v_l_St_3_BlackLine_St_2_LeftTurnState = 75;
          dir_St_3_BlackLine_St_2_LeftTurnState = 2;
          nr_1_St_2_LeftTurnState = false;
          ns_1_St_2_LeftTurnState = Line_follower__St_2_LeftTurnState;
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_LeftTurnState;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_LeftTurnState;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_LeftTurnState;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_LeftTurnState;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_LeftTurnState;
          break;
        case Line_follower__St_2_RightTurnState:
          left_empty_St_3_BlackLine_St_2_RightTurnState = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_RightTurnState = self->right_empty_1;
          v_r_St_3_BlackLine_St_2_RightTurnState = 75;
          v_l_St_3_BlackLine_St_2_RightTurnState = 75;
          dir_St_3_BlackLine_St_2_RightTurnState = 3;
          nr_1_St_2_RightTurnState = false;
          ns_1_St_2_RightTurnState = Line_follower__St_2_RightTurnState;
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_RightTurnState;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_RightTurnState;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_RightTurnState;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_RightTurnState;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_RightTurnState;
          break;
        case Line_follower__St_2_Obstacle:
          left_empty_St_3_BlackLine_St_2_Obstacle = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_Obstacle = self->right_empty_1;
          v_231 = sensor_data[2];
          r_4 = (r_2||r_1);
          if (r_4) {
            Line_follower__obstacle_avoid_reset(&self->obstacle_avoid);
          };
          Line_follower__obstacle_avoid_step(forward_left_ir,
                                             forward_right_ir, v_231,
                                             &Line_follower__obstacle_avoid_out_st,
                                             &self->obstacle_avoid);
          v_l_St_3_BlackLine_St_2_Obstacle = Line_follower__obstacle_avoid_out_st.v_l;
          v_r_St_3_BlackLine_St_2_Obstacle = Line_follower__obstacle_avoid_out_st.v_r;
          dir_St_3_BlackLine_St_2_Obstacle = Line_follower__obstacle_avoid_out_st.dir;
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_Obstacle;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_Obstacle;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_Obstacle;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_Obstacle;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_Obstacle;
          break;
        case Line_follower__St_2_CheckParkingSpots:
          dir_St_3_BlackLine_St_2_CheckParkingSpots = 1;
          v_r_St_3_BlackLine_St_2_CheckParkingSpots = 0;
          v_l_St_3_BlackLine_St_2_CheckParkingSpots = 0;
          v_226 = (left_top_ir==0);
          v_225 = (self->left_empty_1+1);
          v_222 = (left_top_ir==1);
          v_218 = (right_top_ir==0);
          v_217 = (self->right_empty_1+1);
          v_214 = (right_top_ir==1);
          v_213 = (self->v_212-1);
          v_210 = (r_2||r_1);
          if (self->v_209) {
            v_211 = true;
          } else {
            v_211 = v_210;
          };
          if (v_211) {
            timer_parking_check = 50;
          } else {
            timer_parking_check = v_213;
          };
          v_227 = (timer_parking_check==1);
          v_228 = (v_226&&v_227);
          if (v_228) {
            v_229 = 0;
          } else {
            v_229 = self->left_empty_1;
          };
          v_223 = (timer_parking_check==1);
          v_224 = (v_222&&v_223);
          if (v_224) {
            left_empty_St_3_BlackLine_St_2_CheckParkingSpots = v_225;
          } else {
            left_empty_St_3_BlackLine_St_2_CheckParkingSpots = v_229;
          };
          v_219 = (timer_parking_check==1);
          v_220 = (v_218&&v_219);
          if (v_220) {
            v_221 = 0;
          } else {
            v_221 = self->right_empty_1;
          };
          v_215 = (timer_parking_check==1);
          v_216 = (v_214&&v_215);
          if (v_216) {
            right_empty_St_3_BlackLine_St_2_CheckParkingSpots = v_217;
          } else {
            right_empty_St_3_BlackLine_St_2_CheckParkingSpots = v_221;
          };
          v_203 = (timer_parking_check==0);
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_CheckParkingSpots;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_CheckParkingSpots;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_CheckParkingSpots;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_CheckParkingSpots;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_CheckParkingSpots;
          break;
        case Line_follower__St_2_ForwardBlack:
          left_empty_St_3_BlackLine_St_2_ForwardBlack = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_ForwardBlack = self->right_empty_1;
          v_197 = sensor_data[4];
          v_196 = sensor_data[3];
          v_195 = sensor_data[2];
          v_194 = sensor_data[1];
          v_193 = sensor_data[0];
          dir_St_3_BlackLine_St_2_ForwardBlack = 1;
          v_192 = (self->v_191-1);
          v_189 = (r_2||r_1);
          if (self->v_188) {
            v_190 = true;
          } else {
            v_190 = v_189;
          };
          if (v_190) {
            timer_forward = 30;
          } else {
            timer_forward = v_192;
          };
          v_187 = (timer_forward==0);
          if (v_187) {
            nr_1_St_2_ForwardBlack = true;
            ns_1_St_2_ForwardBlack = Line_follower__St_2_CheckParkingSpots;
          } else {
            nr_1_St_2_ForwardBlack = false;
            ns_1_St_2_ForwardBlack = Line_follower__St_2_ForwardBlack;
          };
          r_3 = (r_2||r_1);
          if (r_3) {
            Line_follower__pid_reset(&self->pid);
          };
          Line_follower__pid_step(v_193, v_194, v_195, v_196, v_197,
                                  &Line_follower__pid_out_st, &self->pid);
          v_l_St_3_BlackLine_St_2_ForwardBlack = Line_follower__pid_out_st.v_l;
          v_r_St_3_BlackLine_St_2_ForwardBlack = Line_follower__pid_out_st.v_r;
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_ForwardBlack;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_ForwardBlack;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_ForwardBlack;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_ForwardBlack;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_ForwardBlack;
          break;
        case Line_follower__St_2_ParkOnRight:
          left_empty_St_3_BlackLine_St_2_ParkOnRight = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_ParkOnRight = self->right_empty_1;
          dir_St_3_BlackLine_St_2_ParkOnRight = 4;
          v_r_St_3_BlackLine_St_2_ParkOnRight = 80;
          v_l_St_3_BlackLine_St_2_ParkOnRight = 40;
          v_186 = (self->v_185-1);
          v_183 = (r_2||r_1);
          if (self->v_182) {
            v_184 = true;
          } else {
            v_184 = v_183;
          };
          if (v_184) {
            timer_park_right = 25;
          } else {
            timer_park_right = v_186;
          };
          v_181 = (timer_park_right==0);
          if (v_181) {
            nr_1_St_2_ParkOnRight = true;
            ns_1_St_2_ParkOnRight = Line_follower__St_2_MoveBack;
          } else {
            nr_1_St_2_ParkOnRight = false;
            ns_1_St_2_ParkOnRight = Line_follower__St_2_ParkOnRight;
          };
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_ParkOnRight;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_ParkOnRight;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_ParkOnRight;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_ParkOnRight;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_ParkOnRight;
          break;
        case Line_follower__St_2_ParkOnLeft:
          left_empty_St_3_BlackLine_St_2_ParkOnLeft = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_ParkOnLeft = self->right_empty_1;
          dir_St_3_BlackLine_St_2_ParkOnLeft = 4;
          v_r_St_3_BlackLine_St_2_ParkOnLeft = 40;
          v_l_St_3_BlackLine_St_2_ParkOnLeft = 80;
          v_180 = (self->v_179-1);
          v_177 = (r_2||r_1);
          if (self->v_176) {
            v_178 = true;
          } else {
            v_178 = v_177;
          };
          if (v_178) {
            timer_park_left = 25;
          } else {
            timer_park_left = v_180;
          };
          v_175 = (timer_park_left==0);
          if (v_175) {
            nr_1_St_2_ParkOnLeft = true;
            ns_1_St_2_ParkOnLeft = Line_follower__St_2_MoveBack;
          } else {
            nr_1_St_2_ParkOnLeft = false;
            ns_1_St_2_ParkOnLeft = Line_follower__St_2_ParkOnLeft;
          };
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_ParkOnLeft;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_ParkOnLeft;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_ParkOnLeft;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_ParkOnLeft;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_ParkOnLeft;
          break;
        case Line_follower__St_2_MoveStraightForLeft:
          left_empty_St_3_BlackLine_St_2_MoveStraightForLeft = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_MoveStraightForLeft = self->right_empty_1;
          dir_St_3_BlackLine_St_2_MoveStraightForLeft = 1;
          v_r_St_3_BlackLine_St_2_MoveStraightForLeft = 60;
          v_l_St_3_BlackLine_St_2_MoveStraightForLeft = 60;
          v_174 = (self->v_173-1);
          v_171 = (r_2||r_1);
          if (self->v_170) {
            v_172 = true;
          } else {
            v_172 = v_171;
          };
          if (v_172) {
            timer_move_straight = 30;
          } else {
            timer_move_straight = v_174;
          };
          v_169 = (timer_move_straight==0);
          if (v_169) {
            nr_1_St_2_MoveStraightForLeft = true;
            ns_1_St_2_MoveStraightForLeft = Line_follower__St_2_ParkOnLeft;
          } else {
            nr_1_St_2_MoveStraightForLeft = false;
            ns_1_St_2_MoveStraightForLeft = Line_follower__St_2_MoveStraightForLeft;
          };
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_MoveStraightForLeft;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_MoveStraightForLeft;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_MoveStraightForLeft;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_MoveStraightForLeft;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_MoveStraightForLeft;
          break;
        case Line_follower__St_2_MoveStraightForRight:
          left_empty_St_3_BlackLine_St_2_MoveStraightForRight = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_MoveStraightForRight = self->right_empty_1;
          dir_St_3_BlackLine_St_2_MoveStraightForRight = 1;
          v_r_St_3_BlackLine_St_2_MoveStraightForRight = 60;
          v_l_St_3_BlackLine_St_2_MoveStraightForRight = 60;
          v_168 = (self->v_167-1);
          v_165 = (r_2||r_1);
          if (self->v_164) {
            v_166 = true;
          } else {
            v_166 = v_165;
          };
          if (v_166) {
            timer_move_straight_1 = 30;
          } else {
            timer_move_straight_1 = v_168;
          };
          v_163 = (timer_move_straight_1==0);
          if (v_163) {
            nr_1_St_2_MoveStraightForRight = true;
            ns_1_St_2_MoveStraightForRight = Line_follower__St_2_ParkOnRight;
          } else {
            nr_1_St_2_MoveStraightForRight = false;
            ns_1_St_2_MoveStraightForRight = Line_follower__St_2_MoveStraightForRight;
          };
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_MoveStraightForRight;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_MoveStraightForRight;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_MoveStraightForRight;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_MoveStraightForRight;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_MoveStraightForRight;
          break;
        case Line_follower__St_2_MoveBack:
          left_empty_St_3_BlackLine_St_2_MoveBack = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_MoveBack = self->right_empty_1;
          dir_St_3_BlackLine_St_2_MoveBack = 4;
          v_r_St_3_BlackLine_St_2_MoveBack = 30;
          v_l_St_3_BlackLine_St_2_MoveBack = 30;
          v_162 = (self->v_161-1);
          v_159 = (r_2||r_1);
          if (self->v_158) {
            v_160 = true;
          } else {
            v_160 = v_159;
          };
          if (v_160) {
            timer_move_back = 25;
          } else {
            timer_move_back = v_162;
          };
          v_157 = (timer_move_back<=0);
          if (v_157) {
            nr_1_St_2_MoveBack = true;
            ns_1_St_2_MoveBack = Line_follower__St_2_SuccessfullyParked;
          } else {
            nr_1_St_2_MoveBack = false;
            ns_1_St_2_MoveBack = Line_follower__St_2_MoveBack;
          };
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_MoveBack;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_MoveBack;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_MoveBack;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_MoveBack;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_MoveBack;
          break;
        case Line_follower__St_2_SuccessfullyParked:
          left_empty_St_3_BlackLine_St_2_SuccessfullyParked = self->left_empty_1;
          right_empty_St_3_BlackLine_St_2_SuccessfullyParked = self->right_empty_1;
          dir_St_3_BlackLine_St_2_SuccessfullyParked = 1;
          v_r_St_3_BlackLine_St_2_SuccessfullyParked = 0;
          v_l_St_3_BlackLine_St_2_SuccessfullyParked = 0;
          nr_1_St_2_SuccessfullyParked = false;
          ns_1_St_2_SuccessfullyParked = Line_follower__St_2_SuccessfullyParked;
          v_l_St_3_BlackLine = v_l_St_3_BlackLine_St_2_SuccessfullyParked;
          v_r_St_3_BlackLine = v_r_St_3_BlackLine_St_2_SuccessfullyParked;
          dir_St_3_BlackLine = dir_St_3_BlackLine_St_2_SuccessfullyParked;
          right_empty_St_3_BlackLine = right_empty_St_3_BlackLine_St_2_SuccessfullyParked;
          left_empty_St_3_BlackLine = left_empty_St_3_BlackLine_St_2_SuccessfullyParked;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_3_BlackLine;
      _out->v_r = v_r_St_3_BlackLine;
      _out->dir = dir_St_3_BlackLine;
      right_empty = right_empty_St_3_BlackLine;
      left_empty = left_empty_St_3_BlackLine;
      switch (ck_5) {
        case Line_follower__St_2_Obstacle:
          v_230 = (_out->dir==0);
          if (v_230) {
            nr_1_St_2_Obstacle = true;
            ns_1_St_2_Obstacle = Line_follower__St_2_ForwardOnBlack;
          } else {
            nr_1_St_2_Obstacle = false;
            ns_1_St_2_Obstacle = Line_follower__St_2_Obstacle;
          };
          ns_1 = ns_1_St_2_Obstacle;
          nr_1 = nr_1_St_2_Obstacle;
          break;
        case Line_follower__St_2_CheckParkingSpots:
          v_201 = (right_empty<2);
          v_200 = (left_empty<2);
          v_202 = (v_200&&v_201);
          v_204 = (v_202&&v_203);
          if (v_204) {
            v_206 = true;
            v_205 = Line_follower__St_2_ForwardBlack;
          } else {
            v_206 = false;
            v_205 = Line_follower__St_2_CheckParkingSpots;
          };
          v_199 = (left_empty==2);
          if (v_199) {
            v_208 = true;
            v_207 = Line_follower__St_2_MoveStraightForLeft;
          } else {
            v_208 = v_206;
            v_207 = v_205;
          };
          v_198 = (right_empty==2);
          if (v_198) {
            nr_1_St_2_CheckParkingSpots = true;
            ns_1_St_2_CheckParkingSpots = Line_follower__St_2_MoveStraightForRight;
          } else {
            nr_1_St_2_CheckParkingSpots = v_208;
            ns_1_St_2_CheckParkingSpots = v_207;
          };
          ns_1 = ns_1_St_2_CheckParkingSpots;
          nr_1 = nr_1_St_2_CheckParkingSpots;
          self->v_212 = timer_parking_check;
          self->v_209 = false;
          break;
        case Line_follower__St_2_SuccessfullyParked:
          ns_1 = ns_1_St_2_SuccessfullyParked;
          nr_1 = nr_1_St_2_SuccessfullyParked;
          break;
        case Line_follower__St_2_MoveBack:
          ns_1 = ns_1_St_2_MoveBack;
          nr_1 = nr_1_St_2_MoveBack;
          self->v_161 = timer_move_back;
          self->v_158 = false;
          break;
        case Line_follower__St_2_MoveStraightForRight:
          ns_1 = ns_1_St_2_MoveStraightForRight;
          nr_1 = nr_1_St_2_MoveStraightForRight;
          self->v_167 = timer_move_straight_1;
          self->v_164 = false;
          break;
        case Line_follower__St_2_MoveStraightForLeft:
          ns_1 = ns_1_St_2_MoveStraightForLeft;
          nr_1 = nr_1_St_2_MoveStraightForLeft;
          self->v_173 = timer_move_straight;
          self->v_170 = false;
          break;
        case Line_follower__St_2_ParkOnLeft:
          ns_1 = ns_1_St_2_ParkOnLeft;
          nr_1 = nr_1_St_2_ParkOnLeft;
          self->v_179 = timer_park_left;
          self->v_176 = false;
          break;
        case Line_follower__St_2_ParkOnRight:
          ns_1 = ns_1_St_2_ParkOnRight;
          nr_1 = nr_1_St_2_ParkOnRight;
          self->v_185 = timer_park_right;
          self->v_182 = false;
          break;
        case Line_follower__St_2_ForwardBlack:
          ns_1 = ns_1_St_2_ForwardBlack;
          nr_1 = nr_1_St_2_ForwardBlack;
          self->v_191 = timer_forward;
          self->v_188 = false;
          break;
        case Line_follower__St_2_RightTurnState:
          ns_1 = ns_1_St_2_RightTurnState;
          nr_1 = nr_1_St_2_RightTurnState;
          break;
        case Line_follower__St_2_LeftTurnState:
          ns_1 = ns_1_St_2_LeftTurnState;
          nr_1 = nr_1_St_2_LeftTurnState;
          break;
        case Line_follower__St_2_CorrectByPID:
          ns_1 = ns_1_St_2_CorrectByPID;
          nr_1 = nr_1_St_2_CorrectByPID;
          break;
        case Line_follower__St_2_ForwardOnBlack:
          ns_1 = ns_1_St_2_ForwardOnBlack;
          nr_1 = nr_1_St_2_ForwardOnBlack;
          break;
        default:
          break;
      };
      break;
    default:
      break;
  };
  self->left_empty_1 = left_empty;
  self->right_empty_1 = right_empty;
  self->pnr_2 = nr_2;
  self->ck = ns_2;
  switch (ck_1) {
    case Line_follower__St_3_WhiteLine:
      self->v_286 = nr;
      self->v_280 = ns;
      break;
    case Line_follower__St_3_BlackLine:
      self->v_237 = nr_1;
      self->v_156 = ns_1;
      break;
    default:
      break;
  };;
}


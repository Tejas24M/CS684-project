/* --- Generated the 9/4/2025 at 8:2 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. jan. 24 11:7:31 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
typedef struct Line_follower__obstacle_avoid_mem {
  int v_3;
  int v_1;
  int v_10;
  int v_8;
  int v_15;
  int v_13;
  int v_20;
  int v_18;
  int v_25;
  int v_23;
  int v_30;
  int v_28;
  int v_35;
  int v_33;
  Line_follower__st ck;
  int pnr;
  int avoidance_state_timer_1;
} Line_follower__obstacle_avoid_mem;

typedef struct Line_follower__obstacle_avoid_out {
  int v_l;
  int v_r;
  int dir;
} Line_follower__obstacle_avoid_out;

void Line_follower__obstacle_avoid_reset(Line_follower__obstacle_avoid_mem* self);

void Line_follower__obstacle_avoid_step(int forward_left_ir,
                                        int forward_right_ir,
                                        int center_sensor_input,
                                        Line_follower__obstacle_avoid_out* _out,
                                        Line_follower__obstacle_avoid_mem* self);

typedef struct Line_follower__pid_mem {
  int v_40;
  int v_39;
  int v_37;
  int v;
} Line_follower__pid_mem;

typedef struct Line_follower__pid_out {
  int v_l;
  int v_r;
} Line_follower__pid_out;

void Line_follower__pid_reset(Line_follower__pid_mem* self);

void Line_follower__pid_step(int sensor_input_0, int sensor_input_1,
                             int sensor_input_2, int sensor_input_3,
                             int sensor_input_4,
                             Line_follower__pid_out* _out,
                             Line_follower__pid_mem* self);

typedef struct Line_follower__main_mem {
  Line_follower__st_3 ck;
  Line_follower__st_2 v_156;
  int v_161;
  int v_158;
  int v_167;
  int v_164;
  int v_173;
  int v_170;
  int v_179;
  int v_176;
  int v_185;
  int v_182;
  int v_191;
  int v_188;
  int v_212;
  int v_209;
  int v_237;
  Line_follower__st_1 v_280;
  int v_286;
  int pnr_2;
  int left_empty_1;
  int right_empty_1;
  Line_follower__pid_mem pid;
  Line_follower__obstacle_avoid_mem obstacle_avoid;
  Line_follower__pid_mem pid_1;
  Line_follower__pid_mem pid_2;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  int v_l;
  int v_r;
  int dir;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(int main_sensor_0, int main_sensor_1,
                              int main_sensor_2, int main_sensor_3,
                              int main_sensor_4, int forward_left_ir,
                              int forward_right_ir, int left_top_ir,
                              int right_top_ir,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H

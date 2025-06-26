/* --- Generated the 9/4/2025 at 8:2 --- */
/* --- heptagon compiler, version 1.05.00 (compiled fri. jan. 24 11:7:31 CET 2025) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_main.h"

Line_follower__main_mem mem;
int main(int argc, char** argv) {
  int step_c;
  int step_max;
  int main_sensor_0;
  int main_sensor_1;
  int main_sensor_2;
  int main_sensor_3;
  int main_sensor_4;
  int forward_left_ir;
  int forward_right_ir;
  int left_top_ir;
  int right_top_ir;
  Line_follower__main_out _res;
  step_c = 0;
  step_max = 0;
  if ((argc==2)) {
    step_max = atoi(argv[1]);
  };
  Line_follower__main_reset(&mem);
  while ((!(step_max)||(step_c<step_max))) {
    step_c = (step_c+1);
    
    if ((scanf("%d", &main_sensor_0)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &main_sensor_1)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &main_sensor_2)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &main_sensor_3)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &main_sensor_4)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &forward_left_ir)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &forward_right_ir)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &left_top_ir)==EOF)) {
      return 0;
    };;
    
    if ((scanf("%d", &right_top_ir)==EOF)) {
      return 0;
    };;
    Line_follower__main_step(main_sensor_0, main_sensor_1, main_sensor_2,
                             main_sensor_3, main_sensor_4, forward_left_ir,
                             forward_right_ir, left_top_ir, right_top_ir,
                             &_res, &mem);
    printf("%d\n", _res.v_l);
    printf("%d\n", _res.v_r);
    printf("%d\n", _res.dir);
    fflush(stdout);
  };
  return 0;
}


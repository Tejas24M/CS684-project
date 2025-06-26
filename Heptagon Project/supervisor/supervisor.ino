#include "alphabot_drivers.h"
#include "line_follower.h"

#define NUM_SENSORS 5
int sensorValues[NUM_SENSORS];
Line_follower__main_out _res;
Line_follower__main_mem _mem;
#define LEFT_TOP_IR 8
#define RIGHT_TOP_IR 9

unsigned long previoustime=millis();

void setup()
{
  init_devices();
  forward();
  pinMode(LEFT_TOP_IR, INPUT);
  pinMode(RIGHT_TOP_IR, INPUT);
  Serial.begin(115200);
}

void loop()
{
  AnalogRead(sensorValues);

  char ir = ir_read();
  int forward_left_ir = 0, forward_right_ir = 0;
  if (ir == 'b') { 
    forward_left_ir = 1;
    forward_right_ir = 1;
  } else if (ir == 'l') {
    forward_left_ir = 1;
  } else if (ir == 'r') {
    forward_right_ir = 1;
  }
  int left_top_ir = digitalRead(LEFT_TOP_IR);
  int right_top_ir = digitalRead(RIGHT_TOP_IR);

  unsigned long currenttime=millis();
  bool sec=0;
  if(currenttime-previoustime>=500)
  {
	sec=1;
	previoustime=currenttime;
  }
  Line_follower__main_step(sensorValues[0], sensorValues[1], sensorValues[2], sensorValues[3], sensorValues[4], forward_left_ir, forward_right_ir, left_top_ir, right_top_ir, &_res, &_mem);
  Serial.print(_res.v_l);
  Serial.print(" ");
  Serial.print(_res.v_r);
  Serial.print(" ");
  Serial.print(sensorValues[0]);
  Serial.print(" ");
  Serial.print(sensorValues[1]);
  Serial.print(" ");
  Serial.print(sensorValues[2]);
  Serial.print(" ");
  Serial.print(sensorValues[3]);
  Serial.print(" ");
  Serial.print(sensorValues[4]);
  Serial.print(" ");
  Serial.print(forward_left_ir);
  Serial.print(" ");
  Serial.print(forward_right_ir);
  Serial.print(" ");
  Serial.print(_res.dir);
  Serial.print(" ");
  Serial.print(left_top_ir);
  Serial.print(" ");
  Serial.print(right_top_ir);
  Serial.print(" ");
  Serial.println(" ");

  if(_res.dir == 1){
  forward();
  }
  else if(_res.dir == 2){
  left();
  }
  else if(_res.dir == 3){
  right();
  }
  else if(_res.dir == 4){
    backward();
  }
  else if(_res.dir == 5){
    stop();
  }
  else	forward();
  
  SetSpeed(abs(_res.v_l), abs(_res.v_r));

  delay(20);
}
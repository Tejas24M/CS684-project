# Line-Follower Robot with Obstacle Avoidance and Parking

Created for the CS684 Embedded Systems course, this project builds a line-following robot controller using the Heptagon programming language. The robot can follow white and black lines, switch between them, avoid obstacles and handle parking.

## Table of Contents
- [Robot](#robot)
- [PID](#pid)
- [White Line Following](#white-line-following)
- [Line Switching](#line-switiching)
- [Black Line Following](#black-line-following)
- [Obstacle Avoidance](#obstacle-avoidance)
- [Parking](#parking)

## Robot
The line-following robot is equipped with five IR sensors underneath to detect the line, two IR sensors at the front (front-left and front-right), and two obstacle sensors on the sides (left and right).

## PID
A node named pid is defined to process the five sensor inputs and calculate the left and right motor velocities using a PID control algorithm. The node takes in the sensor values and, through a series of logical steps, returns the velocities for both motors.

PID Terms
The control algorithm uses three terms:

- **Proportional**: Directly adjusts the motor speed based on the current error (difference between the sensor readings).
- **Integral**: Addresses accumulated past errors, helping the robot correct if it has drifted over time.
- **Derivative**: Predicts future error based on the rate of change, helping to smooth out the motion and avoid oscillations.
- 
Adjusting Velocities
The velocities (`v_l` and `v_r`) are dynamically adjusted based on the PID output, ensuring the robot can follow the line accurately and make corrections as needed.

## White line following
In the main node, a state called WhiteLine is defined, which includes substates such as forward, CorrectByPID, LeftTurnState, and RightTurnState. The states transition based on sensor values, and within each state, the velocity is determined.

## Line Switching
In the main node, there are two substates: WhiteLine and BlackLine. The system transitions from the WhiteLine state to the BlackLine state as soon as it detects three consecutive black sensors, with the remaining sensors being white.

## Black Line Following
In the main node, a state caleed BlackLine is defined, which includes substace such as ForwardOnBlack, CorrectByPID, LeftTurnState and RightTurnState which performs the logic for black line following.

## Obstacle Avoidance
In the main node, within the BlackLine state, a substate called obstacle is defined, this state gets activated when atleast one front IR sensor detects a object. This substate invokes the obstacle_avoid node, passing the values from forward_left_ir, forward_right_ir, and center_sensor_input. The node uses a timer-based approach to avoid obstacles, and once the center sensor detects the black line, it performs a final right turn. After that, the system transitions to the AvoidanceComplete state and exits the node.

## Parking
n the main node, within the BlackLine state, a substate called CheckParkingSpots is defined. This state is triggered when either the left or right IR sensor detects an object. It uses two variables, right_empty and left_empty, to check if there is an object on the right or left side. If no object is detected on a side, it increments the corresponding side count and moves forward for a short time. Once it detects two consecutive empty sides, it moves forward briefly and then reverses to the corresponding empty side to park itself.


#include <Servo.h>

Servo RightFoot, RightHip, LeftFoot, LeftHip;

Servo servos[4] = {RightFoot, RightHip, LeftFoot, LeftHip}; //define the differnet servos that will be used as an array
int servoHome[4] = {76, 105, 130, 92};                      //sets the home position of the servo
int servoCurrent[4] = {0,0,0,0};                            //current servo position

/* setup the robot
void setup()
{
  init_servos();
}

void loop()
{
  // this is the walk action
  for(int i = 0; i < 6; i ++){
    move_one_joint(2, 10, 25);  // lift foot a bit for balance
    move_two_joints(0, 1, -15, 15, 10);  //move the leg up and forward
    move_two_joints(2, 3, -15, 15, 5);
    move_two_joints(0, 2, 0, 0, 10);
    delay(100);
    move_one_joint(0, -10, 25);  // lift foot a bit for balance
    move_two_joints(2, 3, 15, -15, 10);  //move the leg up and forward
    move_two_joints(0, 1, 15, -15, 5);
    move_two_joints(0, 2, 0, 0, 10);
    delay(100);
  }
}

/* init all of the servos to there home positions */
void init_servos(){
  servos[0].attach(2);
  servos[1].attach(5);
  servos[2].attach(6);
  servos[3].attach(9);

  for(int i = 0; i < 4; i++){
    servos[i].write(servoHome[i]);
  }
  delay(2000);  // this wait is to show that the servos are in the correct position
}

/* moves two joints at the same time at some speed */
void move_two_joints(int joint1, int joint2, int angle1, int angle2, int spd){
  while((servoCurrent[joint1] != (angle1)) | (servoCurrent[joint2] != (angle2))){
     if(servoCurrent[joint1] != angle1){
      if(angle1 > servoCurrent[joint1]){
        servos[joint1].write(servoHome[joint1] + servoCurrent[joint1]);
        servoCurrent[joint1]++;
      }
      else{
        servos[joint1].write(servoHome[joint1] + servoCurrent[joint1]);
        servoCurrent[joint1]--;
      }
     }
   if(servoCurrent[joint2] != angle2){
    if(angle2 > servoCurrent[joint2]){
      servos[joint2].write(servoHome[joint2] + servoCurrent[joint2]);
      servoCurrent[joint2]++;
    }
    else{
      servos[joint2].write(servoHome[joint2] + servoCurrent[joint2]);
      servoCurrent[joint2]--;
    }
   }
    delay(spd);

  }
}

/* move one joint */
void move_one_joint(int joint1, int angle, int spd){
  while(servoCurrent[joint1] != (angle)){
    if(angle > servoCurrent[joint1]){
      servos[joint1].write(servoHome[joint1] + servoCurrent[joint1] + 1);
      servoCurrent[joint1]++;
    }
    if(angle < servoCurrent[joint1]){
      servos[joint1].write(servoHome[joint1] + servoCurrent[joint1] - 1);
      servoCurrent[joint1]--;
    }
    delay(spd);
  }
}

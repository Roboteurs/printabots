#ifndef FONT_H
#define FONT_H

#include "math.h"

/* constants required for the arty bot */
#define GRIDSIZE  1
#define UPPOS 90
#define DOWNPOS  93
#define OFFSETX 10.0
#define OFFSETY 6.0
#define MIDARMLENGTH 95.0
#define ENDARMLENGTH 49.0


/* the font array of the robot font from : http://cdn.instructables.com/FMZ/WHT8/HGH6RVSD/FMZWHT8HGH6RVSD.LARGE.jpg */
char ARTYFONT[27][12][3] {
    {{0,0,1},{0,4,1},{3,6,1},{6,4,1},{0,6,0},{3,6,1},{3,0,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}              //A
    {{0,0,1},{6,0,1},{6,3,1},{5,5,1},{4,5,1},{3,3,1},{2,5,1},{1,4,1},{0,0,0},{3,0,1},{3,4,0},{0,0,0xff}}                          //B
    {{1,4,1},{0,4,1},{0,1,1},{1,0,1},{5,1,1},{6,1,1},{6,3,1},{5,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}                 //C
    {{0,0,1},{6,0,1},{6,4,1},{5,5,1},{1,5,1},{0,4,1},{0,0,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}              //D
    {{0,5,1},{0,0,1},{6,0,1},{6,5,0},{3,0,1},{3,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}           //E
    {{0,0,1},{6,0,1},{6,5,0},{3,0,1},{3,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}        //F
    {{5,5,1},{6,4,1},{6,1,1},{5,0,1},{1,0,1},{0,1,1},{0,4,1},{1,5,1},{3,5,1},{3,3,0},{0,0,0xff},{0,0,0xff}}                       //G
    {{0,0,1},{6,0,0},{0,5,1},{6,5,0},{3,0,1},{3,5,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}           //H
    {{0,1,1},{0,3,0},{0,2,1},{6,2,0},{6,1,1},{6,3,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}           //I
    {{2,0,1},{1,0,1},{0,1,1},{0,4,1},{1,5,1},{6,5,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}           //J
    {{0,0,1},{6,0,0},{2,0,1},{6,5,0},{3,1,1},{0,5,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}           //K
    {{6,0,1},{0,0,1},{0,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}  //L
    {{0,0,1},{6,0,1},{4,2,1},{6,4,1},{0,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}        //M
    {{0,0,1},{6,0,1},{0,4,1},{6,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}     //N
    {{1,0,1},{5,0,1},{6,1,1},{6,4,1},{5,5,1},{1,5,1},{0,4,1},{0,1,1},{1,0,0},{0,0,0xff},{0,0,0xff},{0,0,0xff}}                    //O
    {{0,0,1},{6,0,1},{6,4,1},{5,5,1},{4,5,1},{3,4,1},{3,0,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}              //P
    {{1,0,1},{5,0,1},{6,1,1},{6,4,1},{5,5,1},{2,5,1},{0,2,1},{0,1,1},{1,0,0},{2,2,1},{0,5,0},{0,0,0xff}}                          //Q
    {{0,0,1},{6,0,1},{6,4,1},{5,5,1},{4,5,1},{3,4,1},{3,0,0},{3,1,1},{0,5,0},{0,0,0xff},{0,0,0xff},{0,0,0xff}}                    //P
    {{1,0,1},{0,1,1},{0,3,1},{1,4,1},{2,4,1},{3,3,1},{3,1,1},{4,0,1},{5,0,1},{6,1,1},{6,3,1},{5,4,0}}                             //S
    {{0,2,1},{6,2,0},{6,0,1},{6,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}     //T
    {{6,0,1},{1,0,1},{0,1,1},{0,3,1},{1,4,1},{6,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}           //U
    {{6,0,1},{0,2,1},{6,4,1},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}  //V
    {{6,0,1},{2,0,1},{0,1,1},{2,2,1},{0,3,1},{2,4,1},{6,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}              //W
    {{6,0,1},{0,5,0},{0,0,1},{6,5,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}     //X
    {{6,0,1},{3,2,1},{0,3,0},{3,2,1},{6,4,0},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}        //Y
    {{0,4,1},{0,0,1},{6,4,1},{6,0,1},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff},{0,0,0xff}}     //Z
}

/* writes a sting out the robot */
void artyWrite(char message[]){
    char i = 0;
    int startx = 0; int starty = 0;

    for (i = 0; i < sizeof(message); i++){
        drawLeter(message[i], starty, startx);
        startx = startx + (GRIDSIZE * 6);
    }
}


/* draws a letter at a location */
void drawLeter(char letter, float starty, float startx){
    char index_letter = letter - 97;
    char i = 0;

    for(i = 0; i < 12; i++){
        moveArm(ARTYFONT[index_letter][i][0], ARTYFONT[index_letter][i][1], starty, startx);
        if (ARTYFONT[index_letter][i][2] < 2){
            raiseLowerArm(ARTYFONT[index_letter][i][2]]):
        }
        else{
            break;
        }
    }
}

/* raise or lower the arm */
void raiseLowerArm(updown){
    if (updown == 1){
        carrage_servo.write(UPPOS);
    }
    if (updown == 0){
        carrage_servo.write(DOWNPOS);
    }
}

/* move the arm to a particular position */
void moveArm(float ypos, float xpos, float starty, float startx){
  int baseServoAngle = 0;
  int midServoAngle = 0;
  float requiredLength = 0;

  // first we want to figure out how long the arm needs to be
  requiredLength = requiredLengthCalc(ypos, xpos);

  // the we calculate the angle of the mid servo;
  midServoAngle = int(armMidAngleCalc(requiredLength, armBaseAngleCalc()));

  // then calculate the angle that needs to be at the base servo
  baseServoAngle = int(armBaseAngleCalc(requiredLength)) - int(baseArmAngleCalc(ypos, xpos) * 100);

  mid_servo.write(midServoAngle);
  base_servo.write(baseServoAngle);
}

/* calculate draw line length */
float requiredLengthCalc(float ypos, float xpos){
  return sqrt( (pow( OFFSETY + ypos, 2) + pow( OFFSETX + xpos, 2)));
}

/* calculates the angle needed at the mid arm joint */
float armMidAngleCalc(float requiredLength, float baseAngle){
  return asin( (requiredLength * sin(baseAngle)) / ENDARMLENGTH );
}

/* calculates the angle at the base of the arm */
float armBaseAngleCalc(float requiredLength){
  return asin( (pow(ENDARMLENGTH,2) + pow(requiredLength,2) + pow(MIDARMLENGTH,2)) / ( -2 * MIDARMLENGTH * ENDARMLENGTH) );
}

/* calculates the angle that the base arm needs to be at */
float baseArmAngleCalc(float ypos, float xpos){
  return atan( OFFSETX + xpos / OFFSETY - ypos );
}

#endif

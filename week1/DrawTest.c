#include "graphics.h"

int main(void) 
{
  //left cheek
  drawArc(108, 100, 50,100, 90, 180);
  drawArc(109, 100, 50,100, 90, 180);
  drawArc(110, 100, 50,100, 90, 180);
  drawArc(111, 100, 50,100, 90, 180);
  drawArc(112, 100, 50,100, 90, 180);
  drawArc(113, 100, 50,100, 90, 180);
  
  //right cheek
  drawArc(345, 100, 50,100, 270, 180);
  drawArc(346, 100, 50,100, 270, 180);
  drawArc(347, 100, 50,100, 270, 180);
  drawArc(348, 100, 50,100, 270, 180);
  drawArc(349, 100, 50,100, 270, 180);
  drawArc(350, 100, 50,100, 270, 180);

  //Nose
  fillRect (264,105, 7, 40);
  drawArc(250, 140, 30, 30 , 90, -270);
  drawArc(250, 141, 30, 30 , 90, -270);
  drawArc(250, 142, 30, 30 , 90, -270);
  drawArc(250, 143, 30, 30 , 90, -270);
  drawArc(250, 144, 30, 30 , 90, -270);
  drawArc(250, 145, 30, 30 , 90, -270);

  //Left Eyebrow
  drawArc(160, 95, 80,30, 0, 180);
  drawArc(160, 96, 80,30, 0, 180);
  drawArc(160, 97, 80,30, 0, 180);
  drawArc(160, 98, 80,30, 0, 180);
  drawArc(160, 99, 80,30, 0, 180);
  drawArc(160, 100, 80,30, 0, 180);

  //$$
  setColour(yellow);
  drawString("$", 190, 115);
  drawString("$", 345, 115);

  //Left Eyes
  setColour(black);
  drawOval(175, 100, 31, 31);
  drawOval(174, 99, 32, 32);
  drawOval(173, 98, 33, 33);
  drawOval(172, 97, 34, 34);
  drawOval(171, 96, 35, 35);
  
  //Right Eyes
  drawOval(330, 100, 31, 31);
  drawOval(329, 99, 32, 32);
  drawOval(328, 98, 33, 33);
  drawOval(327, 97, 34, 34);
  drawOval(326, 96, 35, 35);

  //Right Eyebrow
  drawArc(320, 95, 80,30, 0, 180);
  drawArc(320, 96, 80,30, 0, 180);
  drawArc(320, 97, 80,30, 0, 180);
  drawArc(320, 98, 80,30, 0, 180);
  drawArc(320, 99, 80,30, 0, 180);
  drawArc(320, 100, 80,30, 0, 180);

  //Profit???
  drawArc(237, 157, 70,30, 0, -180);
  drawArc(237, 158, 70,30, 0, -180);
  drawArc(237, 159, 70,30, 0, -180);
  drawArc(237, 160, 70,30, 0, -180);
  drawArc(237, 161, 70,30, 0, -180);
  drawArc(237, 162, 70,30, 0, -180);

  return 0;
}

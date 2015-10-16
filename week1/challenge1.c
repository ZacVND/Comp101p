#include "graphics.h"
#include <math.h>
#include <stdio.h>
#define PI 3.14159


  /*float x, y;
  for (x= -3.14159; x<=3.14159; x+=1.0)
    {
      y = sin(x);
      drawLine(0, 149, x*5, y*5);
    }
  drawLine(0, 149, 499, 149);
  drawLine(249, 0, 299, 249);*/
int main()
{
    double x,y;
    for (x= -PI; x<=PI; x+=0.01)
      {
	y = sin(x);
	drawOval(x*50 + 249, -y*50+149, 1, 1);
        //drawLine(249, 149, x*50 + 249, -y*50+149);

      }
     drawLine(0, 149, 499, 149);
     drawLine(249, 0, 249, 299);


    return(0);
}



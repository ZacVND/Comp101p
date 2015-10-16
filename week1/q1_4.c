#include <math.h>
#include "graphics.h"

int main()
{
  drawLine(110, 145, 60, 145);//base
  drawLine(110, 145, 141, 106);//right base
  drawLine(60, 145, 29, 106);//left base
  drawLine(141, 106, 130, 57);//right mid
  drawLine(29, 106, 40, 57);//left mid
  drawLine(130, 57, 85, 35);//right top
  drawLine(40, 57, 85, 35);//left top
  return 0;
}

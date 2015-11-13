#include <stdio.h>
#include "graphics.h"
#include "math.h"

#define PI 3.14159

int main()
{
	// int startX = 250;
	// int startY = 150;
	double radius;
	double theta;
	double increment = 2.0 * PI/200;

	for (int step = 0; step < 2000; step++)
	{
		theta += increment;
		radius = 100 * step/1000;
		int x = 250 + (int)(radius * cos(theta));
		int y = 150 + (int)(radius * sin(theta));
		drawOval(x,y,1,1);
	}

	return 0;
}
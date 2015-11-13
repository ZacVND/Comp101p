#include <stdio.h>
#include "graphics.h"
#include <math.h>

#define PI 3.14159265
#define pixelWidth 500
#define pixelHeight 300

void drawAxes()
{
	char buffer[10];
	int j = -5;
	int k = -3;
	drawLine(0, 149, pixelWidth, 149);
	for (int i = 0; i <= pixelWidth; i += 50)
	{
		if (j != 0)
		{
		drawLine(i, 149, i, 152);
		sprintf(buffer, "%d", j);
			/* code */
			drawString(buffer, i-5, 163);
		}
			j++;
	}
	drawLine(249, 0, 249, pixelHeight);
	for (int i = 0; i < pixelHeight; i += 50)
	{
		if (k != 0){
		drawLine(249, i, 252, i);
		sprintf(buffer, "%d", k);
			drawString(buffer, 255, i);
		}
		k++;
	}
}

void plotSin()
{
	double x, y;
	setColour(red);
	double xscale = 249/5;
	double yscale = 149/3;
	for (x = -5; x < 5; x+=0.01)
	{
		y = sin(-x);
		int pixelX = (int) (249 + (x * xscale));
		int pixelY = (int) (149 + (y * yscale));
		drawOval(pixelX, pixelY, 1, 1);
	}
}

void plotCos()
{
	double x, y;
	setColour(blue);
	double xscale = 249/5;
	double yscale = 149/3;
	for (x = -5; x < 5; x+=0.01)
	{
		y = -cos(x);
		int pixelX = (int) (249 + (x * xscale));
		int pixelY = (int) (149 + (y * yscale));
		drawOval(pixelX, pixelY, 1, 1);
	}
}

void plotTan()
{
	double x, y;
	setColour(yellow);
	double xscale = 249/5;
	double yscale = 149/3;
	for (x = -5; x < 5; x+=0.01)
	{
		y = tan(-x);
		int pixelX = (int) (249 + (x * xscale));
		int pixelY = (int) (149 + (y * yscale));
		drawOval(pixelX, pixelY, 1, 1);
	}
}

int main()
{
	drawAxes();
	plotSin();
	plotCos();
	plotTan();
	return 0;
}
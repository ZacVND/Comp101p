#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c;
	float s, area;
	printf("Input the values:\n");
	scanf("%i %i %i", &a, &b, &c);
 	if (a+b > c && a+c > b && b+c > a)
 	{
 		printf("These sides make up a triangle with:\n");
 		printf("Perimeter: %i\n", a+b+c);
 		s = (a+b+c)/2;
 		printf("Semiperimeter: %g\n", s);
 		area = sqrt(s*(s-a)*(s-b)*(s-c));
 		printf("Area: %g\n", area);
 	}
 	else
 		printf("Not a triangle.\n");

	return 0;
}
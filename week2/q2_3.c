#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 1;
	do 
	{
		printf("%i * 13 = %i\n",i, i*13);
		i++;
	}while (i<=9);
	return 0;
}
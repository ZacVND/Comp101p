#include <stdio.h>

int recursiveExponential(int base, int exponent)
{
	if(exponent < 0)
	{
		return recursiveExponential(1/base, -exponent);

	}
	else if (exponent == 0)
	{
		return 1;
	}
	else if(exponent == 1)
	{
		return base;
	}
	else if(exponent%2 ==0)
	{
		return recursiveExponential(base * base, exponent/2);
	}
	else if(exponent%2 !=0)
	{
		return base * recursiveExponential(base* base, (exponent -1)/2);
	}

	return 0;

}

int interativeExponential(int base, int exponent)
{
	int result = 1;
	while (exponent)
	{
		if (exponent & 1)
			result *= base;
		exponent >>=1;
		base *= base;
	}
	return result;
	
}

int main()
{
	int base, exponent;
	printf("Input base:\n");
	scanf("%i", &base);
	printf("Input power:\n");
	scanf("%i", &exponent);
	//printf("%d\n", recursiveExponential(base, exponent));
	printf("%d\n", interativeExponential(base, exponent));


	return 0;
}
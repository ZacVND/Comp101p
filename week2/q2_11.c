#include <stdio.h>

void printSquares()
{
	for (int i = 1; i <= 100; i++)
	{
		printf("%i\n", i*i);		/* code */
	}
}

void printEvenSquares()
{
	int i = 0;
	while(i <=100)
	{
		printf("%i\n", i*i);
		i += 2;
	}
}

void printPrimesTraditional()
{
	int isPrime = 1;
	for (int i = 2; i <= 100; i++)
	{
		for (int j = 2; j < i/2; j++)
		{
			if (i%j == 0)
			{
				isPrime = 0;
				break;
			}
			else isPrime = 1;
		}
		if (isPrime == 1)
		{
			printf("%i ", i);
		}
	}
}


int main()
{
	printPrimesTraditional();
	return 0;
}
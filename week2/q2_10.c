#include <stdio.h>

void printFirstLine()
{
	for(int i = 0; i < 7; i++)
		printf("*");

	printf("\n");
}

void printLastLine()
{
	for (int i = 0; i < 7; i++)
	{
		printf("#");
	}
	printf("\n");
}

void printSecondLine()
{
	printf("#");
	printf("*");
	for (int i = 0; i < 4; i++)
	{
		printf(" ");
	}
	printf("*\n");
}

void printSecondLast()
{
	printf("#");
	for (int i = 0; i < 4; i++)
	{
		printf(" ");
	}
	printf("#");
	printf("*\n");
}

void printMiddleLines()
{
	for (int i = 0; i <= 3; i++)
		{
			printf("#");
			for (int j = 0; j < i; j++)
			{
				printf(" ");	
			}
			printf("#*");
			for (int j = 0; j < 3-i; j++)
			{
				printf(" ");

			}printf("*\n");
		}
}

int main()
{
	printFirstLine();
	printSecondLine();
	printMiddleLines();
	printSecondLast();
	printLastLine();

	return 0;
}
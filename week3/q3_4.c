#include <stdio.h>

int calSeq(int start, int end)
{
	int result = 1;
	if ((start >= 0 && end <= 0) || (start <= 0 && end >= 0))
	{
		result = 0;
	}
	else if (start < end)
	{
		for (int i = start; i <= end; ++i)
		{
			result *= i;
		}
	}
	else
	{
		for (int i = start; i >= end; i--)
		{
			result *= i;
		}
	}

	return result;
}

int main()
{
	int start, end;
	printf("Please enter the starting value:\n");
	scanf("%i", &start);
	printf("Please enter the ending value:\n" );
	scanf("%i",&end);

	printf("%i\n", calSeq(start, end));
	return 0;
}
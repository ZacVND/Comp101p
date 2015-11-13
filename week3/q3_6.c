#include <stdio.h>
#include <stdbool.h>

void testPrime(int a)
{
	bool isPrime = true;

	for (int i = 2; i <= a/2; i++)
	{
		if (a % i != 0)
		{
			isPrime = true;
		}
		else isPrime = false;
	}

	if (isPrime == true)
	{
		printf("%i is a prime number.\n", a);
	}
	else printf("%i is not a prime number.\n", a);
}

int main()
{
	int value;
	printf("Enter your value:\n");
	scanf("%i", &value);

	if (value < 2)
	{
		printf("%i is not a prime number.\n", value);
		return 0;
	}

	testPrime(value);	
	return 0;
}
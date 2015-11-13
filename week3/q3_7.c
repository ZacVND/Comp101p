#include <stdio.h>
#include <stdbool.h>

void testTwinPrime(int a, int b)
{
	bool isAPrime = true;
	bool isBPrime = true;

	for (int i = 2; i <= a/2; i++)
	{
		if (a % i != 0)
		{
			isAPrime = true;
		}
		else isAPrime = false;
	}

	for (int i = 2; i <= b/2; i++)
	{
		if (b % i != 0)
		{
			isBPrime = true;
		}
		else isBPrime = false;
	}

	if (isAPrime == true && isBPrime == true)
	{
		if (a - b < -2 || b - a < -2)
		{
			printf("%i and %i are prime numbers but not twin prime.\n",a,b );
		}
		else if (a-b <= 2 || b-a <=2)
		{
			printf("%i and %i are  twin prime.\n",a,b );
		}
	}
	else printf("%i and %i is not a pair of prime number.\n", a, b);
}

int main()
{
	int a, b;
	printf("Enter your first value:\n");
	scanf("%i", &a);
	printf("Enter you second value:\n");
	scanf("%i", &b);

	if (a < 2 || b < 2)
	{
		printf("%i and %i is not a pair of prime numbers.\n", a, b);
		return 0;
	}

	testTwinPrime(a,b);

	return 0;
}
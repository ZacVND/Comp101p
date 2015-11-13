#include <stdio.h>
#include <stdbool.h>
#include <math.h>

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

int main()
{
	long int value;
	printf("Enter your value: \n");
	scanf("%li", &value);
	int length = (value == 0 ? 1 : (int)(log10(value)+1));
	printf("length of value: %i\n", length);
	int array[length];
	// printf("%i\n", value % recursiveExponential(10,length-1));

	for (int i = length; i >0; i--)
	{
		array[i-1] = value / recursiveExponential(10, i-1);
		printf("%i\t", array[i-1]);
		value = value % recursiveExponential(10,i-1);
	}
	printf("\n");

	bool isPalindrome = true;
	// printf("%i\n", length/2);
	for(int i = 0; i < length/2; i++)
	{
		if (array[i] == array[length-(i+1)])
		{
			isPalindrome = true;
			// printf("%d\n", isPalindrome);
		}
		else 
		{
			isPalindrome = false;	
			break;
		}
		// printf("%d\n", isPalindrome);
	}

	if (isPalindrome == true)
	{
		printf("The number is a palindrome.\n");
	}
	else printf("The number is not a palindrome\n");
	return 0;
}


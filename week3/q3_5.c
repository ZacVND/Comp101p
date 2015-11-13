#include <stdio.h>

/* the program would be very annoyingly long to write also it is not interesting.
but the idea is I use the process in q3_3 to separate the number into an array
then I compare each number with my verbalise array.
for example value = 156
then my array = {1, 5, 6}
because it is more than 149 so 1 is called one hundred, 5 is called fifty and 6 is called six
when compared to verbalise array.
then I print the selected words from the verbalise array
*/


const char *one_to_15[15] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen"};

void verbalise(int a)
{

	printf("%s\n", one_to_15[a-1]);
}

int main()
{
	int value;
	printf("Enter your value:\n");
	scanf("%i", &value);
	verbalise(value);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strend(char *s, char *t)
{
	if (t[0] == s[strlen(s)-1])
	{
		return 1;
	}
	else return 0;
}

int main()
{
	char *s, *t;
	s = "Hello World";
	t = "GEll is shit";

	printf("%i\n", strend(s, t));

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stringCopy(char *s)
{
	char  *str;
	str = (char *) malloc(strlen(s));
	for(int i = 0; i < strlen(s); i++)
	{
		str[i] = s[i];
	}
	return str;
}

int main()
{
	char *s,*sx;
	s = "Hello World";
	sx = stringCopy(s);
	printf("%s\n", s);
	printf("%s\n", sx);
	return 0;
}


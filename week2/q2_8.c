#include <stdio.h>

int main(void)
{
	for (int row = 0; row <6; row++)
	{
		if(row % 2 != 0)
		{
			for (int column = 0; column < 6; column++)
			{
				if (column % 2 != 0)
				{
					printf("*");
				}
				else
				{
					printf("#");
				}
			}
		    // printf("\n");
		}
		else
		{
			for (int column = 0; column < 6; column++)
			{
				if (column % 2 != 0)
				{
					printf("#");
				}
				else
				{
					printf("*");
				}
			}
			
		}
	printf("\n");
	}

	return 0;
}

/*int main(void)
{
  int row;
  int column;
  for (row = 0 ; row < 6 ; row++)
  {
    char c = (row % 2) ? '#' : '*';
    for (column = 0 ; column < 6 ; column++)
    {
      printf("%c",c);
      c = (c == '*') ? '#' : '*';
    }

printf("\n");
  }
return 0; }*/
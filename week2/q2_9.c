#include <stdio.h>



int main()
{
	int row, col = 0;
	for (row = 0; row < 9; row++)
	{
		if (row <=4)
		{
			for (col = 0; col <= row+1; col++)
			{
				if (col == 0 || col == row)
				{
					printf("*");
				}
				else if (col == row+1)
				{
					printf("\n");
				}
				else printf(" ");
			}
		}
		else
		{
			for (col = 0; col <= 9-row; col++)
			{
				if (col == 0 || col == 8-row)
				{
					printf("*");
				}
				else if (col == 9-row)
				{
					printf("\n");
				}
				else printf(" ");
			}
		}
	}
	return 0;
}
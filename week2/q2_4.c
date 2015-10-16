#include <stdio.h>

int main(void)
{
	int i = 0;
	while (i<7)
	{
		if (i%2 == 0 && i !=2 && i!=4)
		{
			for(int j = 0; j <= 4; j++)
			{
				printf("*");
			}
		}
		else if (i == 2 || i == 4)
			{	
				for(int k = 0; k <= 4; k++)
				{
					if (k>0 && k<4)
						printf(" ");
					else printf("*");
				}
			}
		else printf("\n\n");
		i++;
	}

	return 0;
}
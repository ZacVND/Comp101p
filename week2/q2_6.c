#include <stdio.h>

int main(void)
{
	int r = 0;
	do {
		if(r <5)
		{
		if(r <1)
		{
			for(int c = 0; c < 5; c++)
			{
				printf("*");
			}
		}
		else{
			for(int c = 0; c < r; c++)
			{
				printf(" ");
			}
				for(int c2 = 0; c2< 5; c2++)
				{
					printf("*");
				}
				
		}
	}
	else
	{
		if(r >7)
		{
			for(int c = 0; c < 5; c++)
			{
				printf("*");
			}
		}
		else{
			for(int c = 8; c > r; c--)
			{
				printf(" ");
			}
				for(int c2 = 0; c2< 5; c2++)
				{
					printf("*");
				}
				
		}
	}
		printf("\n");
		r++;
	}while(r <= 8);
	
	return 0;
}
#include <stdio.h>
#include "main.h"




void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n ; i < 99 ; i++)
		{
			printf("%d", i);
			if (i != 98)
			{	printf(",");
				printf(" ");
			}
		}	
			printf("\n");
	}
	else if (n >= 99)
	{
		for (i = n ; i > 97; i--)
		{
			printf("%d", i);
			if (i != 98)
			{ 	printf(",");
				printf(" ");
			}
		}
			printf("\n");
	}

}	

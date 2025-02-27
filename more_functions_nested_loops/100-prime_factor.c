#include <stdio.h>
#include <math.h>

/**
 * main - Trouve et imprime le plus grand facteur premier de 612852475143.
 *
 * Return: Toujours 0.
 */
int main(void)
{
	long number = 612852475143;
	long largest_factor = -1;
	long i;

    	/*Diviser par 2 autant de fois que possible*/
	while (number % 2 == 0)
	{
 	largest_factor = 2;
 	number /= 2;
	}

 	/* Diviser par les nombres impairs à partir de 3*/
	for (i = 3; i <= sqrt(number); i += 2)
	{
	while (number % i == 0)
	{
		largest_factor = i;
 		number /= i;
	}
	}

	/* Si le nombre restant est supérieur à 2, c'est un facteur premier*/
	if (number > 2)
	{
	largest_factor = number;
	}

 	printf("%ld\n", largest_factor);
	return (0);
}

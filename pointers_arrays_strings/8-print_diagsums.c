#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: Pointer to the first element of the matrix
 * @size: Size of the matrix (size x size)
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

    /* Sum of the main diagonal (top-left to bottom-right) */
		for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

    /* Sum of the secondary diagonal (top-right to bottom-left) */
		for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}

		printf("%d, %d\n", sum1, sum2);
}

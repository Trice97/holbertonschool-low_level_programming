#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Suppress unused variable warning */
	printf("%d\n", argc - 1);
	return (0);
}

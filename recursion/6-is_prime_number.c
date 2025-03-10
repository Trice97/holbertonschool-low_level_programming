#include "main.h"

/**
 * is_prime_helper - Fonction auxiliaire
 * @n: Le nombre à vérifier
 * @i: Le diviseur actuel à vérifier
 * Return: 1 si premier, 0 sinon
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
		return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Vérifie si un nombre est premier
 * @n: Le nombre à vérifier
 * Return: 1 si premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
		return (is_prime_helper(n, 2));
}

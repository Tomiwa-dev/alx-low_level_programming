#include "main.h"
/**
 * is_prime_number - function that checks if a number is a prime number
 * @n: integer
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 0 || n == 1)
		return (0);
	if (n == 1)
		return (1);
	if (n % i == 0)
		return (0);
	i++;
	return (is_prime_number(n));
}

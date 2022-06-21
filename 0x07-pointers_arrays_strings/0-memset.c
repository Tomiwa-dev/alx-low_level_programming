#include "main.h"
/**
 * _memset - function fills the first n bytes of
 * the memory area pointed to by s with the constant byte b
 * @s: pointer
 * @b: variable
 * @n: variable
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (c);
}


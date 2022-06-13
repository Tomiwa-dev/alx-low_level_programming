#include "main.h"
/**
 * _strcpy - copies string
 * @dest: destrination array
 * @src: source array
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src)
		*dest++ = *src++;
	return (a);
}

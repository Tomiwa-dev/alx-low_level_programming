#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (s[len]);
	len++;

	if (len % 2 == 0)
		i = len / 2;
		for (i; i < len; i++)
			_putchar(str[i]);
	else
		i = (len + 1) / 2;
		for (i; i < len; i++)
			_putchar(str[i]);
	_putchar('\n');
}

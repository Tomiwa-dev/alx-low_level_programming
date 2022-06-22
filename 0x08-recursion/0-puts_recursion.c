#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s: string
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}

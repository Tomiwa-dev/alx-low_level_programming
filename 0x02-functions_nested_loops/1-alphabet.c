#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints all letters in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	for (ch = "a"; ch <= "z"; ch++)
	{
		_putchar(ch);
	}
	_putchar("\n");
	return (0);
}

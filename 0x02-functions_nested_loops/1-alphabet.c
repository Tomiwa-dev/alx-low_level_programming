#include "main.h"
/**
 * main -main block
 * Description: prints all letters in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = "a"; ch <= "z"; ch++)
	{
		_putchar(ch);
	}
	_putchar("\n");
	return (0);
}

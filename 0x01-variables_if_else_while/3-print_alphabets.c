#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a program that prints the alphabet in lowercase,
 * * and in uppercase.
 * Return: 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	lower = 'A';
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');
return (0);
}

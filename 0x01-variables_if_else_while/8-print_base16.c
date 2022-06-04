#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char alp = '0';

	while (alp <= '9')
	{
		putchar(alp);
		alp++;
	}

	alp = 'a';

	while (alp <= 'f')
	{
		putchar(alp);
		alpp++;
	}

	putchar('\n');
	return (0);
}

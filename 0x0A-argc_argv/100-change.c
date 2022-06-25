#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the min number of coins
 * @argv: argument vectors
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char **argv)
{
	int change, cent = 0;

	if (argc == 2)
		cent = atoi(argv[1]);

		if (cent < 0)
			printf("%d\n", 0);
			return (0);
		if (cent % 25 >= 0)
			change += cent / 25;
			cent = cent % 25;
		if (cent % 10 >= 0)
			change += cent / 10;
			cent = cent % 10;
		if (cent % 5 >= 0)
			change += cent / 5;
			cent = cent % 5;
		if (cent % 2 >= 0)
			change += cent / 2;
			cent = cent % 2;
		if (cent % 1 >= 0)
			change += cent;
		printf("%d\n", change);
		return (0);
	else
		printf("Error\n");
		return (1);
}

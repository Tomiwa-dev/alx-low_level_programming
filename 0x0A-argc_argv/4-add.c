#include <stdio.h>
#include <stdlib.h>
#incluse <ctype.h>
/**
 * main - adds positive number
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	while (argc -- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}

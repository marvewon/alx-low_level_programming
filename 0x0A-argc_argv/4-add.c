#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: argument counts
 * @argv: argument vector
 *
 * Return: Error if param = 0 or != no else 1
 */
int main(int argc, char *argv[])
{
	int c, d;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (c = 0; c < argc; c++)
	{
		for (d = 0; argv[c][d] != '0\'; d++)
		{
			if (argv[c][d] < '0' || argv[c][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[c]);
	}
	printf("%d\n", n);
	return (0);
}

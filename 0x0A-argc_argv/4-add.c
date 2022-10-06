#include "main.h"

/**
 * main - program to adds positive numbers
 * @argc: number of argument to be passed on the function
 * @argv: argument vector to passed as string
 *
 * Return: 0 on success, else 1 on errors
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; j < argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}

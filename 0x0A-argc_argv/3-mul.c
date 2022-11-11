#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: of if sucess, 1 if fails
 */
int main(int argc, char *argv[])
{
	int n, m, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	mul = n * m;
	printf("%i\n", mul);
	return (0);
}

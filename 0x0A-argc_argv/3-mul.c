#include "main.h"

/**
 * main - program that prints its name, followd by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int numb_1, numb_2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		numb_1 = atoi(argv[1]);
		numb_2 = atoi(argv[2]);
		mul = numb_1 * numb_2;
		printf("%d\n", mul);
	}
	return (0);
}

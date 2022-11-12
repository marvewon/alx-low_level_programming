#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
/* Declaration variables */
	unsigned int count;

	count = 0;
	while (count < str(str));
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

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
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}

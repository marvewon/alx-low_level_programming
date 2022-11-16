#include "main.h"
/*
 * mul - Multiply two strings together
 *
 * @num1: The first number, as a string
 * @num2: The second number, as a string
 * @len1: The length of the first string
 * @len2: The length of the second string
 *
 * Return: Pointer to char array
 */
char *mul(char *num1, char *num2, int len1, int len2)
{
	int i, prod, j, carry, k, digit, reslen;
	char *res;

	reslen = len1 + len2 + 1;
	res = malloc(reslen * sizeof(char));
	if (res == NULL)
		print_err();
	res = init(res, reslen);
	i = len2 - 1; carry = k = digit = 0;
	while (i >= 0 && k < (len1 + len2))
	{
		j = len1 - 1;
		k = digit;
		while (j >= 0)
		{
			carry = 0;
			prod = (num1[j] - '0') * (num2[i] - '0');
			if (prod > 9)
				carry += prod / 10;
			prod = prod % 10;
			if (((res[k] - '0') + prod) > 9)
			{
				carry += 1;
				res[k] += (prod - 10);
			}
			else
				res[k] += prod;
			res[k + 1] += carry;
			k++; j--;
		}
		i--; digit++;
	}
	if (res[k] == '0')
		res[k] = '\0';
	else
		res[k + 1] = '\0';
	return (res);
}

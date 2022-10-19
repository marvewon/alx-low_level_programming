/**
 * File: 0-is_prime_number.c
 * Auth: Marvelous Won
 */

#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_prime_number - function that returns 1 if the input is a prime no
 * @num: number to be checked
 * @div: the divisor
 *
 * Return: if num is divisible by 0
 * 	   if num is not divisible is return - 1
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
}

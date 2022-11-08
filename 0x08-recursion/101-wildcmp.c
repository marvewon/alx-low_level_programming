#include "main.h"

/**
 * wildcmp - compare two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 1 if s1 == s2, else return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0)
	{
		return (wildcmp(*s1, *s2) + 1);
	}
}

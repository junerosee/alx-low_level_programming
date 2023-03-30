#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string one
 * @s2: string two
 * Return: difference between the true strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

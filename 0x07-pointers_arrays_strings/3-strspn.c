#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: initial segment
 * @accept: source of bytes
 * Return: Always 0(success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int j;

	n = 0;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

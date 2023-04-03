#include "main.h"

/**
 * _strpbrk - Locates first occurence of byte in string
 * @s: area where bytes are being located
 * @accept: area where coinciding bytes are contained
 * Return: pointer to byte that coincides in both areas
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return ('\0');
}

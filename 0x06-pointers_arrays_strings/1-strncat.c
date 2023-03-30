#include "main.h"

/**
 * _strncat - concatenates strings wwith at most n bytes from source
 * @src: source of the string
 * @dest: where resulting string is placed
 * @n: number of bytes
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

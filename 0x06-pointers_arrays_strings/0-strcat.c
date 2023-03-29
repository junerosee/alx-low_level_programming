#include "main.h"

/**
 * _strcat - Appends src string to dest string, overwriting
 * the terminating null byte at the end of dest and then adds
 * a terminating null byte
 * @src: contains the string to be appended to dest
 * @dest: where string will be appended upon
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

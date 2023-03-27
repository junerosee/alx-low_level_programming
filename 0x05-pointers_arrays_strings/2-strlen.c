#include "main.h"

/**
 * _strlen - Returns length of a string
 * @s: character that represents string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '0')
	{
		len++;
		s++;
	}

	return (len);
}

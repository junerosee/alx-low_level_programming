#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: character that represents the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

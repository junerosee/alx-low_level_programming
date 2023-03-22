#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: character to be checked
 * Return: 1 if alphabetic character, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

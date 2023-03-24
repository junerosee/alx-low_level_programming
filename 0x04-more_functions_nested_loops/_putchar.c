#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to be written out
 * Return: 1 if true, 0 if false
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

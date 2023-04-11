#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to be printed out
 * Return: On success 1, -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

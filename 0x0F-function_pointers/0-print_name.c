#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the string to be added
 * @f: the pointer to the function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}

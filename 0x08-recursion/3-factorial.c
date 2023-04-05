#include "main.h"

/**
 * factorial - prints factorial of a given number
 * @n: the given number
 * Return: factorial the given number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

#include "main.h"

/**
 * helperFunction - returns 0 or 1
 * @num: number
 * @j: possible factor
 * Return: 0 if not prime, 1 if prime
 */
int helperFunction(int num, int j)
{
	if (j < num)
	{
		if (num % j == 0)
		{
			return (0);
		}
		else
		{
			return (helperFunction(num, j + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: number to be checked
 * Return: 1 if number is prime, 0 if number is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}

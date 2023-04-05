#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number being squar rooted
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates the square root
 * @n: number used to calculate the square root
 * @i: iterate number
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

#include "main.h"

int sqrt_func(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_func(n, 0));
}

/**
 * sqrt_func - This is an helper function that recurses
 * to find the natural square root of a number
 * @x: number to calculate the sqaure root of
 * @y: iterator
 *
 * Return: the resulting square root
 */
int sqrt_func(int x, int y)
{
	if (y * y > x)
		return (-1);
	else if (y * y == x)
		return (y);
	else
		return (sqrt_func(x, y + 1));
}

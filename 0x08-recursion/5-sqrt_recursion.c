#include "main.h"

/**
 * sqrt2 - returns square root
 * @y: int
 * @val: initial
 * Return: int
 */

int sqrt2(int y, int val)
{
if (val * val == y)
	return (y);
else if (val * val > y)
	return (-1);
else
	return (sqrt2(y, val + 1));
}

/**
 *_sqrt_recursion - returns square root of number
 *@n: int
 *Return: int
 */

int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}

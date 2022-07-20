#include <stdio.h>

/**
 * _pow_rceursion - returns the value of x raised to y
 * @x: base
 * @y: power
 * Return: power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}

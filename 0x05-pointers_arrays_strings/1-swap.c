#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: None
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}

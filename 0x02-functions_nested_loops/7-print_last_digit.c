#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: first parameter
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		r = -1 * (n % 10);
		return (r);
	}
	else
	{
		r = n % 10;
		return (r);
	}
}

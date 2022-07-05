#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers up to 98 from given start point
 * @n: first parameter
 *
 * Return:
 * Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while ( n<= 98)
		{
			printf("%d", n);
			n++;
			printf(",");
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			n--;
			printf(",");
		}
		printf("\n");
	}
}

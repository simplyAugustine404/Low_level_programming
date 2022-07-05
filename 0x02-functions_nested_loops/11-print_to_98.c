#include "main"
#include <stdio.h"

/**
 * print_to_8 - prints all umbers up to 98 from given start point
 * @n: first parameter
 *
 * Return:
 * Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

				if (n == 98)
					continue;
			printf(",");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(",");
		}
		printf("\n");
	}
}

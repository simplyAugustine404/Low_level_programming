#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal
 * @n: first parameter
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; n++)
		{
			for (j = 0; j < n; j++);
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

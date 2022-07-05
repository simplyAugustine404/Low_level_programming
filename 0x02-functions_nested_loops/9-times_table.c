#include "main.h"

/**
 * times_table - prints the 9 times table
 * return: none
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			j = (9 * i);
			_putchar('j');
			_putchar('\t');
			_putchar(',');
		}
		_putchar('\n');
	}
}

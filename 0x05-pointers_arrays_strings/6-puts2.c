#include <stdio.h>

/*
 * puts2 - prints one char of 2.
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			putchar('\n');
			break;
		}
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
}

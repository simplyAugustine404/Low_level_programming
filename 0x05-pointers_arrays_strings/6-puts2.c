#include <stdio.h>

/*
 * puts2 - priunts string
 * puts2 - prints every other character of a string
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

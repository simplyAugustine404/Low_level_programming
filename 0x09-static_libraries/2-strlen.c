#include <stdio.h>

/**
 * _strlen - returnslength of a string
 * @s: first parameter
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

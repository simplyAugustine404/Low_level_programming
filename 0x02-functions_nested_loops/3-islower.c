#include "main.h"

/**
 *_islower- prints 1 or 0 depending on whether a character is lowercase or otherwise
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c <= 97 && c <= 122)
		return (0);
	else
		return (1);
}

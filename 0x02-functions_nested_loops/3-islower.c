#include "main.h"

/**
 *_islower-returns 1 if lowercase, 0 otherwise
 *@c: first parameter
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

#include <stdio.h>

/**
 * leet - encodes a string to 1337
 * @s: input string
 * Return: pointer to destination
 */

char *leet(char *s)
{
	int count = 0, i;
	int lows[] = {97, 101, 111, 116, 108};
	int ups[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lows[i] || *(S + count) == ups[i])
			{
				*(s + count) = nums[i];
				break;
			}
		}
		count++;
	}

	return (s);
}

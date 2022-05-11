#include "main.h"

/**
 * _strlen - returns length of str s
 * @s: string to be measured
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

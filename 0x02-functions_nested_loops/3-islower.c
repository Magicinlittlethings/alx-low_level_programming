#include "main.h"

/**
 * _islowwer - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwwise.
 */
int _islower(int c)
{
if (c >= 'a' && <= 'z')
return (1);
else
return (0);
}

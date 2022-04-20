#include "main.h"



/**
 *
 *  * rev_string - reverses string s
 *
 *   * @s: string to be reversed
 *
 *    *
 *
 *     * Return: void
 *
 *      */



void rev_string(char *s)
{
int count = 0, i, temp = 0;
while (*(s + count) != '\0')
{
count++;
}
for (i = 0 ; i <= ((count - 1) / 2) ; i++)
{
temp = *(s + i);
*(s + i) = *(s + (count - (i + 1)));
*(s + (count - (i + 1))) = temp;
}
}

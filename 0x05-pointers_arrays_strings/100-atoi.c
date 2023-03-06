#include "main.h"

/**
 * l - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int_atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

do {
if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');

else if (num > 0)
break;

while } (*s++);

return (num *sign);
}

#include "main.h"

/**
 * print_sign - function name
 * Description: checks if number is positive or negative
 * Return: 1, 0 or -1 depending on given number
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
_putchar('-');
return (-1);
}

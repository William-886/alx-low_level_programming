#include "main.h"

/**
 * print_sign - function that checks if number is positive or negative
 * @n: parameter of type int
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

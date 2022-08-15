#include "main.h"

/**
 * print_last_digit - function name
 * Description: prints last digit of a given number
 * Return: last digit of given number
 */

int print_last_digit(int n)
{
int r = n % 10;
if (n < 0)
{
r = r * (-1);
}
_putchar(r + '0');
return (r);
}

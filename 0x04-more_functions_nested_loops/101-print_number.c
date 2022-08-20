#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: input parameter of type int
 * Return: none
 */

void print_number(int n)
{
	int c, d, m;
    if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	d = n;
	c = 1;
	while (d > 9)
	{
		d = d / 10;
		c = c * 10;
	}
	for ( ; c >= 1; c /= 10)
	{
		m = (n / c) % 10;
		_putchar(m + '0');
	}
}

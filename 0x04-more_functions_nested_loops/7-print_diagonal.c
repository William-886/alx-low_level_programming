#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: parameter of type int
 * Return: A diagonal line
 */

void print_diagonal(int n)
{
int a, b;
	for (a = 1; a <= n; a++)
	{
	_putchar('\\');
	_putchar('\n');
		if (a != n)
		{
			for (b = 0; b < a; b++)
			{
			_putchar(' ');
			}
		}
	}
if (n <= 0)
_putchar('\n');
}

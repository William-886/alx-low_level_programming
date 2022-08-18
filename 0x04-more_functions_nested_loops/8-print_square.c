#include "main.h"

/**
 * print_square - function that prints a square
 * @size: parameter of type int
 * Return: a square followed by a new line
 */

void print_square(int size)
{
int a, b;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar ('#');
}
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}

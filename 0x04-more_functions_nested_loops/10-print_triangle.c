#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: parameter of type int
 * Return: a triangle followed by a new line
 */

void print_triangle(int size)
{
int a, b, d;
int c = 1;
int e = size;
for (d = 0; d < e; d++)
{
for (a = 0; a < (size - 1); a++)
{
_putchar(32);
}
for (b = 0; b < c; b++)
{
_putchar('#');
}
c++;
size--;
_putchar('\n');
}
if (e <= 0)
_putchar('\n');
}

#include "main.h"

/**
 * print_line - function that draws a straight line
 @n: parameter of type int
 * Return: A straight line 
 */

void print_line(int n)
{
int a;
for (a = 1; a <= n; a++)
{
_putchar('_');
}
_putchar('\n');
}

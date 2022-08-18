#include "main.h"

/**
 * print_most_numbers - function that prints numbers from
 * 0 - 9 ecxept 2 and 4
 * Return: All numbers except 2 and 4
 */

void print_most_numbers(void)
{
int a;
for (a = 48; a <= 57; a++)
{
if (a != 50 && a != 52)
{
_putchar(a);
}
}
_putchar('\n');
}

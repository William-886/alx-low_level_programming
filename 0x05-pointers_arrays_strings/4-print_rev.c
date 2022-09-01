#include <stdio.h>
#include "main.h"

/**
 * print_rev - function to print a string in reverse
 * @s: input of type char
 * Return: String in reverse
 */

void print_rev(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
s--;

while (count > 0)
{
_putchar(*s);
count--;
s--;
}
_putchar('\n');
}

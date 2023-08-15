#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that reverses a string
 * @s: input of type char
 * Return: String in reverse
 */

void rev_string(char *s)
{
int i, count = 0;
char a;
for(i = 0; *(s + i) != '\0'; i++)
    count++;

for(i = count - 1; i >= 0; i--)
{
    a = *(s + i);
    return (a);
}
}

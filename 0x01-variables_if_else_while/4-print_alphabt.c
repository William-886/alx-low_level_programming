#include <stdio.h>

/**
 * Main - Entry point
 * Description: print alphabet in lowercase except q and e
 * Return: Always 0
 */

int main(void)
{
int a;
for (a = 97; a <= 122; a++)
{
if (a != 113 && a != 101)
putchar (a);
}
putchar ('\n');
return (0);
}

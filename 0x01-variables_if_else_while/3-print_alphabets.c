#include <stdio.h>

/**
 * Main - Entry point
 * Description: Print alphabet both in lowercase and uppercase
 * Return: Always 0
 */

int main(void)
{
int a;
int b;

for (a = 97; a <= 122; a++)
{
putchar (a);
}
for (b = 65; b <= 90; b++)
{
putchar (b);
}
putchar ('\n');
return (0);
}

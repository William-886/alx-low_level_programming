#include <stdio.h>

/**
 * Main - Entry point
 * Description: Print combination of single digit numbers
 * Return: Always 0
 */

 int main(void)
{
    int a;

    for (a = 48; a <= 57; a++)
    {
        {
            putchar(a);
            if (a != 57)
            {
            putchar (',');
            putchar (32);
            }
        }
    }
    putchar ('\n');
}

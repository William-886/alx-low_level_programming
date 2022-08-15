#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Print combination of single digit numbers
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 57; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55)
					{
						putchar (',');
						putchar (32);
					}
				}
			}
		}
	}
	putchar ('\n');
}

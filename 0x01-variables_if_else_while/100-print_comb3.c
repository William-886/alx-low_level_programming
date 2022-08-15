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

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			if (a < b)
			{
			putchar(a);
			putchar(b);
				if (a != 56)
				{
				putchar (',');
				putchar (32);
				}
			}
		}
	}
	putchar ('\n');
}

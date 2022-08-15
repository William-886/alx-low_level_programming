#include "main.h"

/**
 * print_alphabet_x10 - Function name
 * Description: Function that prints lowercase alphabet 10 times
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
int a;
int b;
	for (a = 0; a <= 9; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}

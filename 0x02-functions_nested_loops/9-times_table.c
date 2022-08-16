#include "main.h"

/**
 * times_table - function name
 * Description: print times table up to 9
 * Return: time table up to 9
 */

void times_table(void)
{
int a, i, j, k, l;
	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
		j = (i * a);
		k = j / 10;
		l = j % 10;

			if (a == 0)
			{
			_putchar('0');
			}
				else if (j > 9)
				{
				_putchar(',');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(l + '0');
				}
					else
					{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(j + '0');
					}
		}
	_putchar('\n');
	}
}

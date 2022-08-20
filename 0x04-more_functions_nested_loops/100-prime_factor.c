#include <stdio.h>

/**
 * main - entry point
 * Description: finds and prints the largest prime factor of a number
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a;
	long number = 612852475143;

	for (a  = 2; a <= number; a++)
	{
		if (number % a == 0)
		{
			number = number / a;
			a--;
		}
	}
	printf("%lu\n", a);
	return (0);
}

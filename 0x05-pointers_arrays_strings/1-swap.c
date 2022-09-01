#include <stdio.h>

/**
 * swap_int - function that swaps values of 2 integers
 * @a: pointer of type int
 * @b: pointer of type int
 * Return: Swapped values of integers
 */

void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}

#include "main.h"

/**
 * _isalpha - function that checks if input is an alphabet
 * @c: input of type int
 * Return: 1 if alphabet or 0 if otherwise
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}

#include "main.h"

/**
 * _strlen_recursion - return length of the string
 * @s: pointer to string
 * Return: int
 */

int _strlen_recursion(char *s)
{
int n = 0;
if (*s > '\0')
{
n += _strlen_recursion + 1;
}

return (n);
}

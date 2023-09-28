#include "main.h"
#include <stdio.h>
/**
 *is_prime_number - check prime
 *@n: int number
 *@num: int
 *Return: 1 if prime or 0 if not prime
 */

int check_prime(int n, int num);

int is_prime_number(int n)
{
check_prime(n, 2);
}

/**
 * check_prime - retuens 0 or 1  if prime pr not
 *@n: int
 *@num:int number
 *Return: 0 or 1
 */

int check_prime(int n, int num)
{
if (num >= n && n > 1)
	return (1);
else if (n % num == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, num + 1));
}

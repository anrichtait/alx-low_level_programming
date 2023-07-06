#include <stdio.h>
#include "main.h"

/**
* helper - helper function to calculate if n is prime
* @n: number to process
* @iterator: each number less than n to iterate through
* Return: iterate or result
*/

int helper(int n, int iterator)
{
	if (n < 2)
	{
		return (0);
	}
	else if (iterator == 1)
	{
	return (1);
	}
	else if (n % iterator == 0)
	{
	return (0);
	}
	else
	return (helper(n, iterator - 1));
}

/**
* is_prime_number - calculate if n is a prime number
* @n: number to process
* Return: result
*/

int is_prime_number(int n)
{
	int iterator = n - 1;

	return (helper(n, iterator));
}

#include <stdio.h>
#include "main.h"

/**
* _sqrt_recursion - calculates the square root of a number
* @n: number to process
* @aprox: incremental guess for sqrt value
* Return: sqrt or -1 if not possible
*/

int helper(int n, int aprox);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	return (helper(n, 0));
}

/**
* helper - helper function
* @n: number to process for
* @aprox: incremental guess for sqrt value
* Return: sqrt or -1 if not possible
*/

int helper(int n, int aprox)
{
	if (aprox * aprox == n)
	{
		return (aprox);
	}
	else if (aprox * aprox > n)
	{
		return (-1);
	}
	else
	return (helper(n, aprox + 1));
}

#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* factorial - calculates the factorial of a number
* @n: number to calculate for
* Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}

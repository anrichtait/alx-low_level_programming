#include <stdio.h>
#include "main.h"

/**
* _pow_recursion - returns x to the power of y
* @x: number to calculate for
* @y: the power
* Return: x to the power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y < 1)
	{
		return (1);
	}
	else
	return (x * _pow_recursion(x, y - 1));
}

#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - allocates memory and checks if success
* @b: amount of memory to allocate
* Return: pointer if success or exit value on fail
*/

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(sizeof(int) * b);


	if (memory == NULL)
	{
		exit(98);
	}
	return (memory);
}

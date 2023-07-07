#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies 2 numbers
* @argc: number of args
* @argv: args
* Return: 1 if error, 0 if pass
*/

int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
* main - prints all the arguments passed on a new line
* @argc: number of arguments
* @argv: arguments
* Return: 0 always
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

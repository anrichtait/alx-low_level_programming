#include <stdio.h>

/**
* main - prints the number of arguments passed
* @argc: number of arguments
* @argv: arguments
* Return: 1 if fail, and 0 if success
*/

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	else
	return (1);

		argv[1] = "p";
}

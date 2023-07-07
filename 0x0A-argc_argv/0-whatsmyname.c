#include <stdio.h>

/**
* main - prints the program name followed by a line
* @argc: number of arguments
* @argv: arguments strings
* Return: 1 (always)
*/

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		printf("%s\n", argv[0]);
		return (1);
	}
	else
	return (0);
}

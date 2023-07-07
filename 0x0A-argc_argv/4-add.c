#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds numbers passed as command-line arguments
* @argc: number of arguments
* @argv: arguments
* Return: 0 on success, 1 on error
*/

int main(int argc, char *argv[])
{
	int i, sum = 0;
	long value;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];
			int j;

			for (j = 0; arg[j] != '\0'; j++)
			{
				if (!isdigit(arg[j]))
				{
					printf("Error: Invalid input\n");
					return (1);
				}
			}
			value = strtol(arg, NULL, 0);

			sum += value;

		}
		printf("%d\n", sum);
	}
	return (0);
}

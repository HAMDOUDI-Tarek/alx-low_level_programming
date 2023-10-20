#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the addition of positive numbers.
 * @argc: Arguments.
 * @argv: Pointers.
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	int count, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	for (count = 1; count < argc; count++)
	{
		if (**(argv + count) < '0' || **(argv + count) > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(*(argv + count));
	}
	printf("%d\n", sum);
	return (0);
}

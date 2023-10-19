#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: Arguments.
 * @argv: Pointers.
 * Return: 1 or 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

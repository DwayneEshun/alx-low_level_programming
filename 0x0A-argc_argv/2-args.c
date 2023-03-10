#include <stdio.h>
#include <stdlib.h>

/**
 * main - The Parent Function
 * @argc: Arguement Counter
 * @argv: Arguement Vector
 * Return: My Success Story
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

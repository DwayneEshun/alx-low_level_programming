#include <stdio.h>
#include <stdlib.h>

/**
 * main - The Parent Function
 * @argv: Arguement Vector
 * @argc: Arguement Counter
 * Return: My success story
 */
int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
return (0);
}

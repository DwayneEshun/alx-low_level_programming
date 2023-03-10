#include <stdio.h>
#include <stdlib.h>

/**
 * main - The parent Function
 * @argv: Arguement vector
 * @argc: Arguement counter
 * Return: Success Story
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc);
	(void) **argv;
	return (0);
}

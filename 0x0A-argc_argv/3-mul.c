#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie inters
 * @argc: counter
 * @argv: vector
 * Return: Zero or One if is error
 */

int main(int argc, char *argv[])
{
	int valor1;
	int valor2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	valor1 = atoi(argv[1]);
	valor2 = atoi(argv[2]);
	printf("%d\n", valor1 * valor2);
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print minimum number of coin
 * @argc: command line argument count
 * @argv: argument vector of arrays
 * Return:0 on success
 */
int main(int argc, char **argv)
{
	int cents, mincoin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Eror\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		mincoin += 1;
	}
	printf("%d\n", mincoin);
	return (0);
}

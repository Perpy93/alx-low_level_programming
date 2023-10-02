#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name
 *
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: return (0) on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

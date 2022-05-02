#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments ita recieves
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(char argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n"' argv[i]);
	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it+ \n
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * 
 * Return: 0 ALways (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

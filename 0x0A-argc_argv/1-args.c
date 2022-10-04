#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it+ \n
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc-1);

	return (0);
}

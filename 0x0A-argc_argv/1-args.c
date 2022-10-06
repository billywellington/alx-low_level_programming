#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it+ \n
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * 
 * Return: 0 ALways (Success)
 */
<<<<<<< HEAD
=======
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
>>>>>>> 75cf89588cd9e65fef33e8f51833035572cb75c4

int main(int argc, char *argv[] __attribute__((unused)))
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

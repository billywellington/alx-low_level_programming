#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
<<<<<<< HEAD
	{
	  printf("%s\n", argv[i]);
	}
=======
		printf("%s\n", argv[i]);
>>>>>>> 6354e5e12e86b508cd5603c0bae1fb0cfa517666
	return (0);
}

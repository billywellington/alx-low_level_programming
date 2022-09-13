#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
			b += a;
	}
<<<<<<< HEAD

	printf("%d\n", z);
=======
	printf("%d\n", b);
>>>>>>> 7adce8d3683b21923d581bdae60df169ea6b8ba9
	return (0);
}

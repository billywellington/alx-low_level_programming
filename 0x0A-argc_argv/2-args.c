#include <stdio.h>
#include "main.h"
/**
 * main - prints the all of arguments passed into it+ \n
 * @argc: number of arguments typed
 * @argv: array pointing to arguements
 * Return: 0 - success
 */
int main(int argc, char *argv[])
{
    int i;
    for (i=0; i < argc; i++)
	{
        printf("%s\n", argv[i]);
    }
	return(0);
}

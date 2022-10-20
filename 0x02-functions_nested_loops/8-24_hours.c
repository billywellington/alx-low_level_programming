#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * 
 * Return: void
 */
void jack_bauer(void)
{
    int i;
    int j;
    int hour = 0;
    while (hour < 10)
    {
        for (i = 0; i < 10; i++)
            printf("0%d:0%d\n", hour, i);
        for (j = 10; i < 60; i++)
            printf("0%d:%d\n", hour, i);
        hour++;
    }
    hour = 10;
    while (hour < 24)
    {
        for (i = 0; i < 10; i++)
            printf("%d:0%d\n", hour, i);
        for (j = 10; i < 60; i++)
            printf("%d:%d\n", hour, i);
        hour++;
    }
}

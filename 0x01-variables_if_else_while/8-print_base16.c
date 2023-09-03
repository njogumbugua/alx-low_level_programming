#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

    /*ASCII value of numbers 0 to 9*/
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
    /*ASCII value of a to g*/
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

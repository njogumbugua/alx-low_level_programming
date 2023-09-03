#include <stdio.h>
/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

    /*ASCII values of numbers*/
	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

    /*ASCII valu of 0 to 9*/
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

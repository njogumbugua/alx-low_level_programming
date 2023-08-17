#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
int row, column, result;
if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
result = column * row;
if (column == 0)
{
_putchar(result + '0');
}
else if (result < 10 && column != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else if (result >= 10 && result < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else if (result >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((result / 100) + '0');
_putchar(((result / 10) % 10) + '0');
_putchar((result % 10) + '0');
}
}
_putchar('\n');
}
}
}


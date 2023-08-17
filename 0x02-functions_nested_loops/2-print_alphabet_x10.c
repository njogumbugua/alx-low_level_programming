#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int lines;
char letter;
for (lines = 0 ; lines < 10; lines++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}

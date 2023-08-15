#include "main.h"
#include <stdio.h>
/**
 * main - print alphabet in lower case
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
    char letter;
    for (letter = 'a'; letter <= 'z'; letter++) 
    {
        putchar(letter);
        putchar('\n');
    }
}

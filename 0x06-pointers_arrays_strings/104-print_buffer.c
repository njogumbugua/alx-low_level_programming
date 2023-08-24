#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
if (size <= 0)
{
printf("\n");
return;
}

for (int i = 0; i < size; i += 10)
{
printf("%08x ", i);
for (int j = i; j < i + 10; ++j)
{
if (j < size) {
printf("%02x ", (unsigned char)b[j]);
}
else
{

printf("   ");
}
}

printf(" ");

for (int j = i; j < i + 10; ++j)
{
if (j < size)
{
char c = b[j];
if (isprint((unsigned char)c))
{
  printf("%c", c);
} else {
  printf(".");
}
} 
else
{
printf(" ");
}
}

printf("\n");
}
}

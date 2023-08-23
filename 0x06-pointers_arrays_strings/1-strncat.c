#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: _strncat parameters
 * @src: _strncat parameters
 * @n: _strncat parameters
 *
 * Return: dest_ptr if Successful
 */
char *_strncat(char *dest, char *src, int n)
{
char *dest_ptr = dest;
while (*dest != '\0')
{
dest++;
}
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (dest_ptr);
}

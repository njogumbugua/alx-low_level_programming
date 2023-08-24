#include <stdio.h>
/**
 * _strncpy - copy a string
 * @dest: *_strncpy parameters
 * @src: *_strncpy parameters
 * @n: *_strncpy parameters
 *
 * Return: dest_start
 */
char *_strncpy(char *dest, char *src, int n)
{
char *dest_start = dest;

while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (dest_start);
}

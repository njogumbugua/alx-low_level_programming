#include "main.h"
/**
 * _strcmp - compare string values
 * @s1: _strcmp parameters
 * @s2: _strcmp parameters
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
return (0);
}


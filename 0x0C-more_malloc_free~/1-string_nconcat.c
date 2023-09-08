#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatinates two string values
 *
 * @s1: string1 value
 *
 * @s2: string2 value
 *
 * @n: number of bytes to concatinate with s2
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

size_t len1 = strlen(s1);
size_t len2 = strlen(s2);

if(n >= len2)
{
n = len2;
}

char *result = malloc(len1 + n + 1);

if (result == NULL)
{
return (NULL);
}

strcpy(result, s1);
strcat(result, s2);

return (result);
free(result);
}

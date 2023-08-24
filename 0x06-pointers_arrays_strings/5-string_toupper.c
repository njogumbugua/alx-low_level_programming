#include "main.h"
/**
 * string_toupper - change all lowercase values to uppercase
 * @str: pointer
 *
 * Return: str
 */

char *string_toupper(char *str)
{
if (str == NULL)
{
return (NULL);
}

char *ptr = str;
while (*ptr != '\0')
{
*ptr = toupper(*ptr);
ptr++;
}

return (str);
}

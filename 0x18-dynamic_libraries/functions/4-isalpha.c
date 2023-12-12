#include "main.h"
/**
 *_isalpha - checks for alphabetic charactere.
 * @c: the character to be checked
 * Return: 0 (Success) 1 (Fail).
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

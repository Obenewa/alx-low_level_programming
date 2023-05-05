#include "main.h"
/**
* _isalpha - Function that checks for alphabetic character
*
* @c: alphabet to check for
*
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

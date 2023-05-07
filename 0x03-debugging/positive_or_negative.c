#include "main.h"
/**
 * postitive_or_negative - Check if given number is +, - or 0
 *
 * @i: number to be checked
 * Return: nothing on success
 */
void postitive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}

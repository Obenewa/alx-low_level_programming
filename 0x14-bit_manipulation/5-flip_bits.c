#include "main.h"
/**
 * flip_bits - Should write a function that returns the number of bits
 * that would be needed to flip to get from one number to another
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int z, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (z = 63; z >= 0; z--)
{
current = exclusive >> z;
if (current & 1)
count++;
}
return (count);
}

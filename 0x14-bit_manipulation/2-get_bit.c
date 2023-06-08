#include "main.h"
/**
 * get_bit - Should return the value of a bit at a given index
 * @n: The number to be searched for
 * @index: The index of the bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n >> index) & 1;
return (bit_val);
}

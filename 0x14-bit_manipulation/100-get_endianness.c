#include "main.h"
/**
 * get_endianness - Should check for a machine
 *to know if it is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int z = 1;
char *c = (char *) &z;
return (*c);
}

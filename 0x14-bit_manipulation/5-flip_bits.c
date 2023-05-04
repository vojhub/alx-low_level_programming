#include "main.h"

/**
 * flip_bits - jous the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x = n ^ m;
unsigned int jou = 0;

while (x != 0)
{
jou++;
x &= (x - 1);
}
return (jou);
}



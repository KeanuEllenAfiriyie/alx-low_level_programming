#include "main.h"



int clear_bit(unsigned long int *k, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	k = ~(1 << index);
	*n = *n & k;

	return (1);
}

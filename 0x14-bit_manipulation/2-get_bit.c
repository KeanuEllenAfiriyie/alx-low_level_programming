#include "main.h"



int get_bit(unsigned long int i, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((i & (1 << index)) == 0)
		return (0);

	return (1);
}

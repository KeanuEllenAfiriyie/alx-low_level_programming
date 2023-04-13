#include "main.h"



unsigned int flip_bits(unsigned long int p, unsigned long int q)
{
	unsigned long int btw, check;
	unsigned int num, i;

	check = 1;
	btw = p ^ q;
	num = 0;

	for (k = 0; k < (sizeof(unsigned long int) * 8); k++)
	{
		if (check == (btw & check))
			num++;
		check <<= 1;
	}
	return (num);
}

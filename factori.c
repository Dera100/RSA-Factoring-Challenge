#include "factor.h"

/**
 * factorize - The function factorize a number code
 *
 * @buffer: pointer to the address of the number code
 *
 *
 * Author: dera100
 *
 * Return: int
 */
int factorize(char *buffer)
{

	u_int32_t num;
	u_int32_t i;

	num = atoi(buffer);


	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n",num,num/i,i);
			break;
		}
	}

return (0);
}

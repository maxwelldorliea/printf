#include "main.h"


/**
 * get_base_len - return the length of the base
 * @n: int
 * @b: int
 * Return: int
 */

int get_base_len(int n, int b)
{
	int len = 0;

	while (n > 0)
	{
		n /= b;
		len++;
	}

	return (len);
}

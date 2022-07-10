#include "main.h"


/**
 * pr_bin - prints the binary representation of a number
 * @args: va_list
 * Return: unsigned int
 */


int pr_bin(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int cnt = 0;
	int *ptr = &cnt;

	return (cnvrt_to_bin(num, ptr));
}

/**
 * cnvrt_to_bin - converts decimal to binary
 * @n: unsigned int
 * @cnt: int pointer
 * Return: int
 */

int cnvrt_to_bin(unsigned int n, int *cnt)
{
	if (n / 2)
		cnvrt_to_bin(n / 2, cnt);

	*cnt += _putchar((n % 2) + '0');

	return (*cnt);
}

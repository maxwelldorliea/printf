#include "main.h"

/**
 * pr_unsi_int - prints the octa representation of a number
 * @args: va_list
 * Return: int
 */

int pr_unsi_int(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int cnt = 0;
	int *ptr = &cnt;

	return (cnvrt_to_unsi_int(num, ptr));
}

/**
 * cnvrt_to_unsi_int - converts decimal to binary
 * @n: unsigned int
 * @cnt: int pointer
 * Return: int
 */

int cnvrt_to_unsi_int(unsigned int n, int *cnt)
{
	if (n / 10)
		cnvrt_to_unsi_int(n / 10, cnt);

	*cnt += _putchar((n % 10) + '0');

	return (*cnt);
}

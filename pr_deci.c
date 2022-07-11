#include "main.h"
#include <limits.h>

/**
 * pr_dec - prints the decimal representation of a number
 * @args: va_list
 * Return: int
 */

int pr_dec(va_list args)
{
	int num = va_arg(args, unsigned int);
	int cnt = 0;
	int *ptr = &cnt;

	if (num < 0)
		cnt += _putchar('-');

	return (cnvrt_to_dec(num, ptr));
}

/**
 * cnvrt_to_dec - converts to decimal
 * @n: int
 * @cnt: int pointer
 * Return: int
 */

int cnvrt_to_dec(int n, int *cnt)
{
	if (n < 0 && n == INT_MIN)
	{
		unsigned int num = n * -1;

		if (num / 10)
			cnvrt_to_dec(num / 10, cnt);
		*cnt += _putchar((num % 10) + '0');
		return (*cnt);
	}

	if (n < 0)
		n *= -1;

	if (n / 10)
		cnvrt_to_dec(n / 10, cnt);

	*cnt += _putchar((n % 10) + '0');

	return (*cnt);
}

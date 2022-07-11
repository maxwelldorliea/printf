#include "main.h"


/**
 * pr_octa - prints the octa representation of a number
 * @args: va_list
 * Return: int
 */


int pr_octa(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int cnt = 0;
	int *ptr = &cnt;

	return (cnvrt_to_octa(num, ptr));
}

/**
 * cnvrt_to_octa - converts decimal to octal
 * @n: unsigned int
 * @cnt: int pointer
 * Return: int
 */

int cnvrt_to_octa(unsigned int n, int *cnt)
{
	if (n / 8)
		cnvrt_to_octa(n / 8, cnt);

	*cnt += _putchar((n % 8) + '0');

	return (*cnt);
}

#include "main.h"


/**
 * pr_non_prt - prints non-printable characters
 * @args: va_list
 * Return: int
 */

int pr_non_prt(va_list args)
{
	int i = 0, cnt = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";

	while (s[i])
	{
		unsigned int n = s[i];

		if ((n > 0 && n < 32) || n >= 127)
		{
			int c = 0;
			int *ptr = &c;

			cnt += _putchar('\\');
			cnt += _putchar('x');
			cnt += _putchar('0');

			cnt += cnvrt_to_heX(n, ptr);
			i++;
			continue;
		}

		cnt += _putchar(s[i]);
		i++;
	}

		return (cnt);
}
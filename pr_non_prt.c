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
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			int c = 0, len;

			cnt += _putchar('\\');
			cnt += _putchar('x');
			len = get_base_len(s[i], 16);

			if (len != 2)
				cnt += _putchar('0');
			cnt += cnvrt_to_heX(s[i], &c);
			i++;
			continue;
		}

		cnt += _putchar(s[i]);
		i++;
	}

		return (cnt);
}

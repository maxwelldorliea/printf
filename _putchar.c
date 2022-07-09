#include "main.h"
#include <unistd.h>

/**
 * _putchar - print a char
 * @ch: char
 * Return: int
 */


int _putchar(int ch)
{
	return (write(1, &ch, 1));
}

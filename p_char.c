#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * p_char - Entry Point
 * @args: list name
 * Return: length
 */
int p_char(va_list args)
{
	char s = va_arg(args, int);

	_putchar(s);
	return (1);
}

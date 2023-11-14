#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
* _pcheck - a function that checks for the printf cases.
* @args: va_list parameter.
* @c: the character after '%' to bec checked.
*
* Return: ana input for the printf
*/

int _pcheck(va_list args, char c)
{
	if (c == '\0')
	{
		return (-1);
	}
	else if (c == 'c')
	{
		return (_putc(va_arg(args, int)));
	}
	else if (c == 's')
	{
		return (_puts(va_arg(args, char *)));
	}
	else if (c == 'd' || c == 'i')
	{
		return (_putint(va_arg(args, int)));
	}
	else if (c == '%')
	{
		return (_putc('%'));
	}
	return (0);
}

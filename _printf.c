#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

/**
* _printf - a function that produces output according to a format.
* @format: a character string.
* @...: a variable number of variables.
*
* Return: the number of characters printed pc.
*/

int _printf(const char *format, ...)
{
	int pc = 0;

	va_list args;

	if (!format)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			pc++;
		}
		else if (*format == '%')
		{
			format++;
			pc += _pcheck(args, *format);
		}
		format++;
	}
	va_end(args);
	return (pc);
}

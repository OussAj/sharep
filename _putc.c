#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
* _putc - a function that prints a character.
* @c: the character to printed.
*
* Return: return number of characters printed.
*/
int _putc(char c)
{
	write(1, &c, 1);
	return (1);
}

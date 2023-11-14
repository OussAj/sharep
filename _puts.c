#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
* _puts - a function that prints a string.
* @str: the string to be printed.
*
* Return: length of the string.
*/

int _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	write(1, str, len);
	return (len);
}

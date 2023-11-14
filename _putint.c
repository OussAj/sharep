#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
* _putint - a funtion that prints an integer.
* @n: the integer to be printed.
*
* Return: returns the length of the number.
*/

int _putint(int n)
{
	char buffer[20];

	int count = 0, i = 0, j;

	if (n == 0)
	{
		count += write(1, "0", 1);
		return (count);
	}

	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}

	while (n != 0)
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)

	{
		count += write(1, &buffer[j], 1);
	}

	return (count);
}

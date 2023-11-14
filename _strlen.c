#include "main.h"
#include <stdio.h>

/**
 * _strlen - counts string length.
 * @str: the string to be operated.
 * 
 * Return: the length of string.
*/
int _strlen(char *str)
{
    int len = 0;
    
    while (str[len] != '\n')
    {
        len++;
    }
    return (len);
}

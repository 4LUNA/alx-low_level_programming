#include "main.h"

/**
 * _strncat - Concatenates two strings up to n characters.
 * @dest: The destination string.
 * @src: The source string to append.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*dest)
dest++;

while (*src && n--)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (ptr);
}

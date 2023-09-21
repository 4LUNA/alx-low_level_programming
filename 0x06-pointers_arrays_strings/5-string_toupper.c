#include "main.h"

/**
 * string_toupper - Converts all lowercase letters to uppercase.
 * @str: The string to modify.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
char *ptr = str;

while (*str)
{
if (*str >= 'a' && *str <= 'z')
*str -= 32;
str++;
}

return (ptr);
}

#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13_map[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
j = 0;
while (alphabet[j] != '\0')
{
if (str[i] == alphabet[j])
{
str[i] = rot13_map[j];
break;
}
j++;
}
}

return str;
}

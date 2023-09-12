#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all hexadecimal digits in lowercase,
 * followed by a newline, using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char hex_digits[] = "0123456789abcdef";
int i = 0;

while (i < 16)
{
putchar(hex_digits[i]);
i++;
}

putchar('\n');

return (0);
}

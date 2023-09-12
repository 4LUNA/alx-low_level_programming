#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ', ' and rows separated by newline characters, using only
 * the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1 = 0;

while (num1 <= 9)
{
int num2 = 0;

while (num2 <= 9)
{
putchar(num1 + '0');
putchar(',');
putchar(' ');
putchar(num2 + '0');
putchar(' ');

num2++;
if (num2 <= 9)
{
putchar(',');
putchar(' ');
}
}

num1++;

if (num1 <= 9)
{
putchar('\n');
}
}

putchar('\n');

return (0);
}

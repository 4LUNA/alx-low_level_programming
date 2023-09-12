#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 * separated by ', ', in ascending order, using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;

num1 = 0;

while (num1 <= 8)
{
num2 = num1 + 1;

while (num2 <= 9)
{
putchar(num1 + '0');
putchar(num2 + '0');

if (num1 != 8 || num2 != 9)
{
putchar(',');
putchar(' ');
}
num2++;
}

num1++;
}

putchar('\n');

return (0);
}

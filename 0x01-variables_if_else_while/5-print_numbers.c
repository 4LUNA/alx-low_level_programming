#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers in base 10 from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;

while (digit < 10)
{
printf("%d\n", digit);
digit++;
}

return (0);
}

#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor for
 *
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
long factor = 2;

while (n > 1)
{
if (n % factor == 0)
{
n /= factor;
}
else
{
factor++;
}
}

return factor;
}

int main(void)
{
long n = 612852475143;
long largest = largest_prime_factor(n);

printf("%ld\n", largest);

return (0);
}

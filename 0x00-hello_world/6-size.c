#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints the size of various data types
 * on the computer it is compiled and run on.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of short: %zu bytes\n", sizeof(short));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long: %zu bytes\n", sizeof(long));
printf("Size of long long: %zu bytes\n", sizeof(long long));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of double: %zu bytes\n", sizeof(double))
printf("Size of long double: %zu bytes\n", sizeof(long double));

return (0);
}

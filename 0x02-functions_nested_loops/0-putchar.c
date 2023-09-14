#include "main.h"
/**
*main -Entry point  to print _putchar
*
*Return: Always 0 (success)
*
*/
int main(void)
{

int i;
char c[] = "_putchar";

for (i = 0; i <= 7; i++)
{
char current_char = c[i];
if (current_char != '\0')
_putchar(current_char);
else
_putchar('\n');
}

return (0);
}
 
  

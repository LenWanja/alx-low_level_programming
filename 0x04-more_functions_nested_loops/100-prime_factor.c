#include <stdio.h>

/**
* main - print the largest prime factor for 612852475143
*
* Return: Always 0 (Success)
*/

int main(void)
{
unsigned long num = 612852475143;
unsigned long divisor = 2;

while (divisor < num)
{
if (num % divisor == 0)
{
num /= divisor;
divisor = 2;
}
else
divisor++;
}
printf("%lu\n", num);
return (0);
}

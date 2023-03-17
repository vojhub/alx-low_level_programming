#include <stdio.h>

/**
* main - Entry point of the program
*
* Check if number is positive or negative or zero
*
* Return: Always 0 (success)
*/
int main(void)
{
int n = 0;

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative\n", n);
}
return (0);
}

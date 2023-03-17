#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point of the program
*
* Get int base of 16
*
* assign variable
*
* Return: Always 0 (success)
*/
int main(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar((x % 10) + '0');
if (x == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}


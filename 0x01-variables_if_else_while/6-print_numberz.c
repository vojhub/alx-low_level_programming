#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point of the program
*
* Get int 0-9:
*
* assign variable
*
* Return: Always 0 (success)
*/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
}
putchar('\n');
return (0);
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point of the program
*
* Get char from a
*
* assign variable
*
* Return: Always 0 (success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}

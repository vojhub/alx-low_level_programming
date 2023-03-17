#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - Entry point of the program
*
* Get char Z-A:
*
* assign variable
*
* Return: Always 0 (success)
*/
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}

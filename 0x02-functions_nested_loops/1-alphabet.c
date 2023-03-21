#include "main.h"
/*
* main - Entry point of the program
*
*print alphabets
*
*return 0 (success)
*/

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
return (0);
}

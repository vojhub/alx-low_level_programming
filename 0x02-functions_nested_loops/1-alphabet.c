#include "main.h"
/*
* main - Entry point of the program
*
*print alphabets
*
*return 0 (success)
*/

void print_alphabet_x10(void)
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

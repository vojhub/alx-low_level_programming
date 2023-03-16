#include <unistd.h>
/**
* main - Entry point of the program
*
* Return: Always 1 (success)
*/
int main(void) {
const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
const ssize_t len = sizeof(msg) - 1;  /*  exclude null terminator */

const ssize_t written = write(STDERR_FILENO, msg, len);
return (written == len) ? 1 : 0;
}


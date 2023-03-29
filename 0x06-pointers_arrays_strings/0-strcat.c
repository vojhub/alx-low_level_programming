#include "main.h"
/**
 *_strcat -  concatenates two strings
 *@dest: A pointer to an char that will be updated
 *@src: A pointer to an char that will be updated
 *Return: dest
 */
char *_strcat(char *dest, char *src) {
int dest_len = strlen(dest);
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

dest[dest_len + i] = '\0';
return dest;
}


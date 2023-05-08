#include "main.h"
/**
* append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails  NULL - -1.
 *  If the no file, no write permissions - -1. Else - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int lettrsn;
int rwr;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
for (lettrsn = 0; text_content[lettrsn]; lettrsn++)
;
rwr = write(fd, text_content, lettrsn);
if (rwr == -1)
return (-1);
}
close(fd);
return (1);
}

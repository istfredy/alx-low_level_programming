#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * _strlen - length of a string
 * @str: pointer to string
 *
 * Return: length of string
 */

size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: -1 If the function fails or filename is NULL
 *	   -1 If the file does not exist the user lacks write permissions.
 *	   Else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdata;
	ssize_t lenght;

	if (filename == NULL)
		return (-1);
	fdata = open(filename, O_WRONLY | O_APPEND);
	if (fdata == -1)
		return (-1);
	if (text_content != NULL)
		lenght = write(fdata, text_content, _strlen(text_content));
	close(fdata);
	if (lenght == -1)
		return (-1);
	return (1);
}

#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: -1  if failure else 1
 */

int create_file(const char *filename, char *text_content)
{
	int op, wt;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, lenght);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}

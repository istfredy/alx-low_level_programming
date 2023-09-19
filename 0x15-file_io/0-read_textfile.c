#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to be read and be print
 *
 * Return: 0 if failure, Else actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdata;
	ssize_t rd, wt;
	char *buffer;

	if (filename == NULL)
		return (0);
	fdata = open(filename, O_RDONLY);
	if (fdata == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fdata);
		return (0);
	}
	rd = read(fdata, buffer, letters);
	close(fdata);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}
	wt = write(STDOUT_FILENO, buffer, rd);
	free(buffer);
	if (rd != wt)
		return (0);
	return (wt);
}


#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * read_textfile - read the text content of a given file
 * @filename: filename(FD)
 * @letters: number of letters to be read from the file
 * Return: actual number of letters read or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned int fd, i;
	unsigned int rd_success;
	char *cell;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	i = -1;
	if (fd == i)
		return (0);

	cell = malloc(sizeof(char *) * letters);
	if (cell == NULL)
		return (0);

	read(fd, cell, letters);

	rd_success = printf("%s", cell);

	close(fd);
	free(cell);
	return (rd_success);
}

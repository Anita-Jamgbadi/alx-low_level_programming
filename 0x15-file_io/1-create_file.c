#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - creates a new file wth the given filename and content
 * @filename: name of the file to be created
 * @text_content: content of created file
 * Return: 1, -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == 0)
	{
		fd = open(filename, O_WRONLY);
	}
	else
	{
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
	}
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	write(fd, text_content, strlen(text_content));
	close(fd);
	return (1);
}

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
 * append_text_to_file - add text to the end of a file
 * @filename: file to be handled
 * @text_content: text to ad to the end of the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, F_OK);
	if (access(filename, F_OK))
	{
		if (text_content != NULL)
		{
			write(fd, text_content, strlen(text_content));
		}
	}
	close(fd);
	return (1);
}

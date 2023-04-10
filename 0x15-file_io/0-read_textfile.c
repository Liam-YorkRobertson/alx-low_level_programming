#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>

/**
 *
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t r;
	ssize_t w;

	if (filename == NULL) /*filename null*/
	{
		return (0);
	}

	fp = fopen(filename, "O_RDONLY");

	if (fp == NULL) /*fp cannot be opened or read*/
	{
		return (0);
	}

	buffer = malloc(sizeof(letters));
	r = read(fp, buffer, char *, letters);
	w = write(STDOUT_FILENO, buffer, char *, r);

	if (w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fp);
	return(w);
}

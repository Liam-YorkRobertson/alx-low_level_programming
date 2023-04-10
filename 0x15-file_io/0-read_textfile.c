#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>

/**
 *read_textfile - reads a text file and prints to posix output
 *@filename: file we are reading from
 *@letters: number of characters we want to read
 *Return: w (succcess), 0 (failure)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp; /*got a bunch of errrors using FILE*/
	char *buffer;
	ssize_t r;
	ssize_t w;

	if (filename == NULL) /*filename null*/
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);

	if (fp == -1) /*fp cannot be opened or read*/
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	r = read(fp, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fp);
	return (w);
}

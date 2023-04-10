#include "main.h"
#include <fcntl.h>
#include <stdio.h>

/**
 *append_text_to_file - appends text to a file
 *@filename: file to append to
 *@text_content: text to append
 *Return: 1 (success), -1 (failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int i, w;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i])
		{
			i++;
		}
		w = write(fp, text_content, i);

		if (w == -1)
		{
			return (-1);
		}
	}

	close(fp);
	return (1);
}

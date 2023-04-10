#include "main.h"
#include <fcntl.h>

/**
 *create_file: creates a file
 *@filename: name of file to be created
 *@text_content: content of new file
 *Return: 1 (success), -1 (failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int perm, i, w;

	if (filename == NULL)
	{
		return (-1);
	}

	perm = 600; /*permission codei for user has read and write perms*/
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, perm);

	if (fp == -1)
	{
		close(fp);
		return (-1);
	}

	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i])
		{
			i++;
		}
	}

	w = write(fp, text_content, i);

	if (w == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}

#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenate arguments
 *@ac: argument count
 *@av: argument vector
 *Return: pointer to string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *m;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac) /*for calculating how much mem we need*/
	{
		while (av[i][j])
		{
			l++; /*get amount of chars*/
			j++;
		}
		j = 0;
		i++;
	}

	m = malloc((sizeof(char) * l) + 1); /*get required mem*/
	i = 0;
	while (av[i]) /*concatenating strings*/
	{
		while (av[i][j])
		{
			m[k] = av[i][j];
			k++;
			j++;
		}
		m[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	m[k] = '\0';
	return (m);
}

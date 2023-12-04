#include "main.h"

/**
 * Description: release_data - releases hold on data structure
 *
 * @datastrc: the data structure
 * Return: returns 0
 */

void release_data(data_shl *datastrc)
{
	unsigned int i;

	for (i = 0; datastrc->_environ[i]; i++)
	{
		free(datastrc->_environ[i]);
	}

	free(datastrc->_environ);
	free(datastrc->pid);
}

/**
 * Description: set_data - init data structure
 *
 * @datash: the data structure
 * @argv: argument vector
 * Return: returns 0
 */

void set_data(data_shl *datash, char **argv)
{
	unsigned int i;

	datash->argv = argv;
	datash->input = NULL;
	datash->args = NULL;
	datash->status = 0;
	datash->container = 1;

	for (i = 0, environ[i]; i++)
		;

	datash->environ = malloc(sizeof(char *) * (i + 1));

	for (i = 0; environ[i]; i++)
	{
		datash->environ[i] = _strdup(environ[i]);
	}

	datash->_environ[i] = NULL;
	data->pid = aux_itoa(getpid());
}

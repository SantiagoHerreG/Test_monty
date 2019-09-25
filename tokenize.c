#include "monty.h"

char **tokenize(char *str, const char *delim, char **args)
{
	int i = 0;
	char *token = NULL;

	token = strtok(str, delim);
	while (token != NULL)
	{
		args[i] = malloc(100);
		strcpy(args[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	args[i] = NULL;
	free(token);
	return (args);
}

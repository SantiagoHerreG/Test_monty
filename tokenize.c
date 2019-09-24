#include "monty.h"

char **tokenize(char *str, const char *delim)
{
	int i = 0;
	char *token = NULL;
	char **args = NULL;

	args = malloc(sizeof(char *) * 1024);
	if (args == NULL)
		return (NULL);

	token = strtok(str, delim);
	while (token != NULL)
	{
		args[i] = token;
		printf("Tokens: %s\n", args[i]);
		token = strtok(NULL, delim);
		i++;
	}
	args[i] = NULL;
	free(token);
	return (args);
}

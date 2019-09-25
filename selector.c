#include "monty.h"

/**
 * opcode_selector - function that returns the function to be performed
 * @op: argument passed to the program in the file
 * Return: pointer to a function that takes two args and returns void
 */

void (*opcode_selector(char *op))(stack_t **, unsigned int)
{
	instruction_t instructs[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{"add", add},
		{NULL, NULL}
		};

	int i = 0;

	while (instructs[i].opcode != NULL)
	{
		if (!strcmp(instructs[i].opcode, op))
			return (instructs[i].f);
		i++;
	}
	return (NULL);
}

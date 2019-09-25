#include "monty.h"

void (*opcode_selector(char *op))(stack_t **, unsigned int)
{
	instruction_t instructs[] = {
		{"push", push},
		{"pall", pall},
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

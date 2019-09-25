#include "monty.h"

stack_t *new_stack;
void execute(char **args)
{
	void (*func)(stack_t **, unsigned int);
	unsigned int i = 0, j = 0;
	char *opcode[500];
	stack_t *stack = NULL;

	new_stack = malloc(sizeof(stack_t));

	while (args[i])
	{
		tokenize(args[i], " ", opcode);
		if ((!strcmp("push", opcode[0]) && !opcode[1]) ||
(!strcmp("push", opcode[0]) && !isdigit(atoi(opcode[1]))))
			error_handling("push", i + 1);
		else if (opcode[1])
			new_stack->n = atoi(opcode[1]);
		func = opcode_selector(opcode[0]);
		func(&stack, i);
		i++;
		for (j = 0; opcode[j]; j++)
			free(opcode[j]);
	}
	for (j = 0; args[j]; j++)
		free(args[j]);
	free_dlist(stack);
	free (new_stack);
}

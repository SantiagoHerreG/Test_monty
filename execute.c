#include "monty.h"

stack_t *new_stack;
void execute(char **args)
{
	void (*func)(stack_t **, unsigned int);
	unsigned int i = 0;
	char *opcode[500];
	stack_t *stack = NULL;
	/*extern stack_t *new_stack;*/

	new_stack = malloc(sizeof(stack_t));

	printf("Execute\n");
	while (args[i])
	{
		tokenize(args[i], " ", opcode);
		if (opcode[1])
			new_stack->n = atoi(opcode[1]);
		func = opcode_selector(opcode[0]);
		func(&stack, i);
		i++;
	}
	free (new_stack);
}

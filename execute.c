#include "monty.h"

int new_n[2];
/**
 * execute - function that executes the commands read
 * @args: array of arguments by lines
 * Return: void
 */
void execute(char **args)
{
	void (*func)(stack_t **, unsigned int);
	unsigned int i = 0, j = 0;
	char *opcode[500], **tok_res;
	stack_t *stack = NULL;

	new_n[0] = 0;
	new_n[1] = 0;
	while (args[i])
	{
		tok_res = tokenize(args[i], " ", opcode);
		if (!tok_res)
		{
			i++;
			continue;
		}
		if (!strcmp("push", opcode[0]))
		{
			if (!opcode[1])
				error_handling("push", i + 1);
			else if (!atoi(opcode[1]) && strcmp(opcode[1], "0"))
				if (strcmp(opcode[1], "-0") && strcmp(opcode[1], "+0"))
					error_handling("push", i + 1);
			new_n[0] = atoi(opcode[1]);
		}
		if (opcode[0][0] == '#')
		{
			i++;
			continue;
		}
		if (!strcmp("stack", opcode[0]))
		{
			new_n[1] = 0;
			continue;
		}
		else if (!strcmp("queue", opcode[0]))
		{
			new_n[1] = 1;
			continue;
		}
		func = opcode_selector(opcode[0], i + 1);
		func(&stack, i);
		i++;
		for (j = 0; opcode[j]; j++)
			free(opcode[j]);
	}
	for (j = 0; args[j]; j++)
		free(args[j]);
	free_dlist(stack);
}

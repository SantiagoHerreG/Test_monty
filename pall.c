#include "monty.h"

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	tmp = *stack;

	line_number = line_number;

	if (*stack == NULL)
		return;
	else
	{
		printf("Pedal: antes del while\n");
		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			tmp = tmp->next;
		}
		printf("Pedal: depois del while\n");
	}
}

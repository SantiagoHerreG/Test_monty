#include "monty.h"

stack_t *new_stack;
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	new_node = malloc(sizeof(stack_t));

	line_number =  line_number;
	new_node->n = new_stack->n;
	new_node->next = NULL;
	new_node->prev = NULL;	
	if (*stack == NULL)
		*stack = new_node;
	else
	{
		(*stack)->prev = new_node;
		new_node->next = *stack;
		*stack = new_node;
		printf("New node: %d\n", new_node->n);
	}
	/*printf("%d\n", new_stack->n);*/
}

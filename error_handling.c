#include "monty.h"

void print_error(unsigned int line_number, char *error)
{
	fprintf(stderr, "L%u: %s\n", line_number, error);
	exit(EXIT_FAILURE);
}

void error_handling(char *id, unsigned int line_number)
{
	if (!strcmp("push", id))
		print_error(line_number, "usage: push integer");
	else if (!strcmp("pop", id))
		print_error(line_number, "can't pop an empty stack");
	else if (!strcmp("add", id))
		print_error(line_number, "cant' add, stack too short");
	else if (!strcmp("sub", id))
		print_error(line_number, "cant' sub, stack too short");
	else if (!strcmp("mul", id))
		print_error(line_number, "cant' mul, stack too short");
}

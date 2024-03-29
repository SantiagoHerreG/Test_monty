#include "monty.h"

/**
 * print_error - prints an error
 * @line_number: Line number error can be found
 * @error: Error message
*/
void print_error(unsigned int line_number, char *error)
{
	fprintf(stderr, "L%u: %s\n", line_number, error);
	exit(EXIT_FAILURE);
}

/**
 * error_handling - selects and error
 * @id: error identification name
 * @line_number: Line number error can be found
*/
void error_handling(char *id, unsigned int line_number)
{
	if (!strcmp("push", id))
		print_error(line_number, "usage: push integer");
	else if (!strcmp("pint", id))
		print_error(line_number, "can't pint, stack empty");
	else if (!strcmp("pop", id))
		print_error(line_number, "can't pop an empty stack");
	else if (!strcmp("swap", id))
		print_error(line_number, "can't swap, stack too short");
	else if (!strcmp("add", id))
		print_error(line_number, "can't add, stack too short");
	else if (!strcmp("sub", id))
		print_error(line_number, "can't sub, stack too short");
	else if (!strcmp("div", id))
		print_error(line_number, "can't div, stack too short");
	else if (!strcmp("mod", id))
		print_error(line_number, "can't mod, stack too short");
	else if (!strcmp("divzero", id))
		print_error(line_number, "division by zero");
	else if (!strcmp("mul", id))
		print_error(line_number, "can't mul, stack too short");
	else if (!strcmp("pchar", id))
		print_error(line_number, "can't pchar, stack empty");
	else if (!strcmp("pcharout", id))
		print_error(line_number, "can't pchar, value out of range");
}

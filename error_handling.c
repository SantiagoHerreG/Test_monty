#include "monty.h"

void error_handling(char *id, unsigned int line_number)
{
	if (!strcmp("push", id))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
}

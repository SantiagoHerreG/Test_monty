#include "monty.h"

void open_read_file(char *filename, char **args)
{
	int fd, read_char = 1;
	char *command;

	args = args;

	fd = open(filename, O_RDONLY);

	command = malloc(ARG_MAX * 100);

	read_char = read(fd, command, ARG_MAX * 1000);

	read_char = read_char;
	printf("Leido = \"%s\n\"", command);
	free(command);
}	

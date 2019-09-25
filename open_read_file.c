#include "monty.h"
/**
 * open_read_file - function that opens the file, reads and returns the args
 * @filename: name of the file passed to the program
 * @args: array of arguments tokenized by lines in the file
 * Return: void
 */
void open_read_file(char *filename, char **args)
{
	int fd, read_char = 1;
	char *command;

	args = args;

	fd = open(filename, O_RDONLY);

	command = malloc(ARG_MAX * 100);

	read_char = read(fd, command, ARG_MAX * 100 - 1);

	read_char = read_char;

	tokenize(command, "\n", args);

	free(command);

}	

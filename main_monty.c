#include "monty.h"

int main(int argc, char **argv)
{
	char *args[1000];

	argc = argc;
	open_read_file(argv[1], args);
	printf("Main\n");
	printf("%s\n", args[0]);
	execute(args);
	
	/*exit_on_failure()*/
	exit_on_success();
	return (0);
}

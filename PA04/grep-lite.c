#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * * argv)
{
	int i;
	for (i = 1; i < argc; i++)
	{
		if (!strcmp(argv[i], "--help"))
		{
			fprintf(stdout, "<help-message>\n");
			fprintf(stdout, "Usage: grep-lite [OPTION]... PATTERN\n");
			fprintf(stdout, "Search for PATTERN in standard input. PATTERN is a\n");
			fprintf(stdout, "string. grep-lite will search standard input line by\n");
			fprintf(stdout, "line, and (by default) print out those lines which\n");
			fprintf(stdout, "contain pattern as a substring.\n\n");
			fprintf(stdout, "  -v, --invert-match     print non-matching lines\n");
			fprintf(stdout, "  -n, --line-number      print line numbers with output\n");
			fprintf(stdout, "  -q, --quiet            suppress all output\n\n");
			fprintf(stdout, "Exit status is 0 if any line is selected, 1 otherwise;\n");
			fprintf(stdout, "if any error occurs, then the exit status is 2.\n");
			fprintf(stdout, "</help-message>\n");
			return EXIT_SUCCESS;
		}
	}

	if (argv[argc - 1][0] == '-')
	{
		fprintf(stderr, "Match cannot begin with '-'\n");
		return EXIT_FAILURE;
	}

	int invert = 0;
	int line = 0;
	int quiet = 0;

	for (i = 1; i < argc - 1; i++)
	{
		if (!strcmp(argv[i], "-v"))
			invert = 1;
		else if (!strcmp(argv[i], "-n"))
			line = 1;
		else if (!strcmp(argv[i], "-q"))
			quiet = 1;
		else
		{
			fprintf(stderr, "Unrecognized argument, Aborting...\n");
			return EXIT_FAILURE;
		}
	}

	while (!feof(stdin))
	{

	}

	return EXIT_SUCCESS;
}
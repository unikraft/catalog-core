#include <stdio.h>

#ifndef BUFSIZ
#define BUFSIZ	4096
#endif

#define DEFAULT_FNAME	"/hello.txt"

static char buffer[BUFSIZ];

static void print_file_contents(const char *fname)
{
	FILE *f;
	size_t nread;

	f = fopen(fname, "rt");
	if (f == NULL) {
		fprintf(stderr, "fopen: Unable to open file %s\n", fname);
		return;
	}

	while (1) {
		nread = fread(buffer, 1, BUFSIZ, f);
		if (nread == 0)
			break;
		printf("%s", buffer);
	}
}

int main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		print_file_contents(DEFAULT_FNAME);
	else
		for (i = 1; i < argc; i++)
			print_file_contents(argv[i]);

	return 0;
}

#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int p;
	ssize_t q, r;
	char *nan;

	if (!filename)
		return (0);

	p = open(filename, O_RDONLY);

	if (p == -1)
		return (0);

	nan = malloc(sizeof(char) * (letters));
	if (!nan)
		return (0);

	q = read(p, nan, letters);
	r = write(STDOUT_FILENO, nan, q);

	close(p);

	free(nan);

	return (r);
}

#include "main.h"

/**
 * read_textfile - reads and print textfile to POSIX standard output
 * @filename: incoming string file
 * @letters: number of letters to print and write
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descr;
	char *buffer;
	ssize_t bytes_read, bytes_written, let_read = 0;

	if (filename == NULL)
		return (0);

	file_descr = open(filename, O_RDONLY);
	if (file_descr == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descr);
		return (0);
	}

	bytes_read = read(file_descr, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descr);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_descr);
		return (0);
	}

	let_read = bytes_written;

	free(buffer);
	close(file_descr);
	return (let_read);
}

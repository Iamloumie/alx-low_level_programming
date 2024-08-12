#include "main.h"
#define BUFFER_SIZE 1024

/**
 * error_exit - exit upon error found
 * @code: number to print upon exit
 * @msg: incoming error message
 * @filename: incoming file name
 */
void error_exit(int code, const char *msg, const char *filename)
{
	dprintf(STDERR_FILENO, msg, filename);
	exit(code);
}

/**
 * main - entry point of the program
 * @argc: incoming number of arguments
 * @argv: incoming argument string
 * Return: 0, always successful
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, b_read, writ_b;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((b_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		writ_b = write(fd_to, buffer, b_read);
		if (writ_b == -1 || writ_b != b_read)
		{
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (b_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

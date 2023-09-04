#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * exit_with_error - Print an error message and exit with the given status
 * @message: The error message
 * @status: The exit status
 */
void exit_with_error(const char *message, int status)
{
	dprintf(STDERR_FILENO, message);
	exit(status);
}

/**
 * main - Program entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, exit codes 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int from_fd = 0, to_fd = 0;
	ssize_t bytes_read;
	char buffer[READ_BUF_SIZE];

	if (argc != 3)
		exit_with_error(USAGE, 97);
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		exit_with_error(ERR_NOREAD, 98);
	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
	{
		close(from_fd);
		exit_with_error(ERR_NOWRITE, 99);
	}

	while ((bytes_read = read(from_fd, buffer, READ_BUF_SIZE)) > 0)
	{
		if (write(to_fd, buffer, bytes_read) != bytes_read)
		{
			close(from_fd);
			close(to_fd);
			exit_with_error(ERR_NOWRITE, 99);
		}
	}
	if (bytes_read == -1)
	{
		close(from_fd);
		close(to_fd);
		exit_with_error(ERR_NOREAD, 98);
	}

	close(from_fd);
	close(to_fd);

	return (EXIT_SUCCESS);
}

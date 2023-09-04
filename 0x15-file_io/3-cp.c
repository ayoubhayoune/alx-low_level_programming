#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * copy_file_content - Copies content from source to destination file
 * @from_fd: Source file descriptor
 * @to_fd: Destination file descriptor
 * Return: 1 on success, 0 on failure
 */
int copy_file_content(int from_fd, int to_fd)
{
	ssize_t bytes_read;
	char buffer[READ_BUF_SIZE];

	while ((bytes_read = read(from_fd, buffer, READ_BUF_SIZE)) > 0)
	{
		if (write(to_fd, buffer, bytes_read) != bytes_read)
			return (0);
	}

	return (bytes_read == 0);
}

/**
 * main - Copies the content of one file to another file
 * @argc: The number of arguments
 * @argv: The argument vector
 * Return: 0 on success, exit codes 97-100 on failure
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		return (EXIT_FAILURE);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
		return (EXIT_FAILURE);
	}

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
		close(from_fd);
		return (EXIT_FAILURE);
	}

	if (!copy_file_content(from_fd, to_fd))
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
		close(from_fd);
		close(to_fd);
		return (EXIT_FAILURE);
	}

	close(from_fd);
	close(to_fd);
	return (EXIT_SUCCESS);
}

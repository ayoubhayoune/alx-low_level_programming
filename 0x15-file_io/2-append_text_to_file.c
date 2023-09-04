#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text content to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status, len;

	if (filename == NULL)
		return (-1);

	/* Open the file for appending or create if it doesn't exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;

		write_status = write(fd, text_content, len);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

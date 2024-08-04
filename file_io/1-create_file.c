#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a NULL terminated string to write to the file. 
 * Return: 1 on success, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t bytes_written;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		bytes_written = write(file_desc, text_content, length);
		if (bytes_written == -1 || (size_t)bytes_written != length)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}


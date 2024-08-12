#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: filename to be appended
 * @text_content: text to be added
 * Return: 1 on sucess and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descr, written;
	ssize_t txtlen;

	if (filename == NULL)
		return (-1);

	file_descr = open(filename, O_WRONLY | O_APPEND);
	if (file_descr == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		txtlen = strlen(text_content);
		written = write(file_descr, text_content, txtlen);
		if (written == -1 || written != txtlen)
		{
			close(file_descr);
			return (-1);
		}
	}

	close(file_descr);
	return (1);
}

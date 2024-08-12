#include "main.h"

/**
 * create_file - creates a new file with filename and contents
 * @filename: the name of the new file to create
 * @text_content: the content to fill the new file with
 * Return: returns 1 for success and -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file_descr;
	int success = 1;

	if (!filename)
		return (-1);

	file_descr = fopen(filename, "w+");
	if (!file_descr)
	{
		return (-1);
	}

	if (text_content)
		fputs(text_content, file_descr);

	fclose(file_descr);

	if (success == 1)
		chmod(filename, S_IRUSR | S_IWUSR);

	return (success);
}

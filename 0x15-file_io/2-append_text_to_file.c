#include "main.h"

/**
 * append text into file - Used to append an text into the last of the file.
 *
 * @filename: share into name of file.
 * @text_content: A string to be add into end  file.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, writter, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	writter = write(fp, text_content, count);

	if (a == -1 || writter == -1)
		return (-1);

	close(a);

	return (1);
}

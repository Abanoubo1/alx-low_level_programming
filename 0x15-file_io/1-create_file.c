#include "main.h"

/**
 * create_file - a function that create a file
 *
 * @filename: name of file  createing
 * @text_content: string in write to file
 *
 * Return: 0 on success OR -1 on rounge
*/

int create_file(const char *filename, char *text_content)
{
	int ab, writter, count = 0;

	if (filename == NULL)
		return (-1);

	ab = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ab == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count] != '\0')
			count++;

		writter = write(ab, text_content, count);
		if (writter == -1)
			return (-1);
	}

	close(ab);
	return (0);
}

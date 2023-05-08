#include "main.h"

/**
 * create_file - a function to create a file
 *
 * @filename: name file that create
 * @text_content: string to write to file
 *
 * Return: 1 on success OR -1 on faliure
*/

int create_file(const char *filename, char *text_content)
{
	int fa, writter, count = 0;

	if (filename == NULL)
		return (-1);

	fa = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fa == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count] != '\0')
			count++;

		writter = write(fa, text_content, count);
		if (writter == -1)
			return (-1);
	}

	close(fa);
	return (1);
}

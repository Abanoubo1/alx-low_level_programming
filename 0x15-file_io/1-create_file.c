#include "main.h"

/**
 * create_file  function that creates a file
 *
 * @filename:name creat
 * @text_content:string to write to file
 *
 * Return: 1 on success OR -1 on rounge
*/

int create_file(const char *filename, char *text_content)
{
	int aw, writter, count = 0;

	if (filename == NULL)
		return (-1);

	aw = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (aw == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count] != '\0')
			count++;

		writter = write(aw, text_content, count);
		if (writter == -1)
			return (-1);
	}

	close(aw);
	return (1);
}

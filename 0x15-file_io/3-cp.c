#include "main.h"

/**
 * vexit - print error messages and exits with  number
 *
 * @error: else the exit number  file descript
 * @str: name of either file_in or out of file
 * @fd: description file
 *
 * Return: 0 if success
*/
int vexit(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - create a copy of file
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 for success.
*/

int main(int argc, char *argv[])
{
	int file_in, file_out;
	int readerIn, writterIn;
	int close_in, close_out;
	char buffer[1024];

	if (argc != 3)
		vexit(97, NULL, 0);

	file_in = open(argv[1], O_RDONLY);
	if (file_in == -1)
		vexit(98, argv[1], 0);

	file_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_out == -1)
		vexit(99, argv[2], 0);

	while ((readerIn = read(file_in, buffer, 1024)) != 0)
	{
		if (readerIn == -1)
			vexit(98, argv[1], 0);

		writterIn = write(file_out, buffer, readerIn);
		if (writterIn == -1)
			vexit(99, argv[2], 0);
	}

	close_in = close(file_in);
	if (close_in == -1)
		vexit(100, NULL, file_in);

	close_out = close(file_out);
	if (close_out == -1)
		vexit(100, NULL, file_out);

	return (0);
}

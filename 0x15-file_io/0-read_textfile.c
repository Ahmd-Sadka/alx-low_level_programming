#include "main.h"

/**
 *read_textfile - function that reads a text file and
 *prints it to the POSIX standard output
 *
 *@filename: file name
 *@letters: no letters printed
 *Return: actual number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t read_out, write_out;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}
	read_out = read(fp, buffer, letters);
	close(fp);
	if (read_out == -1)
	{
		free(buffer);
		return (0);
	}
	writeout = write(STDOUT_FILENO, buffer, read_out);
	free(buffer);
	if (read_out != write_out || write_out == -1)
		return (0);

	return (write_out);

}

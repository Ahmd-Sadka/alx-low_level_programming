#include "main.h"

/**
 *create_file - Create a function that creates a file.
 *
 *@filename: file name
 *@text_content: pointer to string
 *Return: 1 (succcess) or -1 (error)
 */

int create_file(const char *filename, char *text_content)
{
	int counter = 0, fp = 0, outp = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[counter] != '\0')
			counter++;
	}
	else
	{
		close(fp);
		return (1);
	}
	outp = write(fp, text_content, counter);
	if (outp == -1 || outp != counter)
		return (-1);

	close(fp);
	return (1);

}

#include "main.h"

/**
 *append_text_to_file - unction that appends text at the end of a file.
 *
 *@filename: file name pointer
 *@text_content: string text point
 *Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int counter = 0, fp = 0, outp = 0;

	if (filename != NULL)
		fp = open(filename, O_WRONLY | O_APPEND);
	else
		return (-1);
	if (fp == -1)
		return (-1);

	if (text_content != NULL)
	{
		while(text_content[counter] != '\0')
			counter++;
	}
	else
		return (1);

	outp = write(fp, text_content, counter);
	if (outp == -1)
		return (-1);

	close(fp);
	return (1);
}

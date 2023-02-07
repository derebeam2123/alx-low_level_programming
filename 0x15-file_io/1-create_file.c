#include "main.h"
/**
 * create_file - name file
 * @filename: file create
 * @text_content: write file
 * Return: -1 and 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_contrnt, _strlen(text_content));


	close(fd);

	return (1);
}
/**
 * _strlen - strlen
 * @s: string
 * Return: length
 */
int_strlen(char *s)
{
	int c = 0;

	while (S[c])
		c++;
	return (c);
}

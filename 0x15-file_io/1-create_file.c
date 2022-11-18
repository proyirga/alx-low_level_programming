#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of a file to be created
 * @text_content: content to be added to the file
 *
 * Return: 1 on success, -1 on failure
 *
 * Description:
 * **The created file must have those permissions: rw-------.
 * ***If the file already exists, do not change the permissions.
 * **if the file already exists, truncate it
 * **if filename is NULL return -1
 * **if text_content is NULL create an empty file
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd, rstatus, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rstatus = write(fd, text_content, i);
		if (rstatus == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

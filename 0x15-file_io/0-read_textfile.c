#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters in the file
 *
 * Return: the actual number of letters it could read and print
 *
 * Description: returns the actual number of letters it could read and print
 * **if the file can not be opened or read, return 0
 * **if filename is NULL return 0
 * **if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	rcount = read(fd, buffer, letters);
	if (rcount == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount == -1 || rcount != wcount)
		return (0);
	free(buffer);

	close(fd);
	return (wcount);
}

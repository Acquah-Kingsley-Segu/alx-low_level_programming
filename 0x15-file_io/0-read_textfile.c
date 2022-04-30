#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>

/**
 * read_textfile - reads a text file and prints to POSIX std output
 * @filename: pointer to file
 * @letters: number of characters to read from file
 *
 * Return:
 *	actual value of characters printed if successful
 *	0 otherwise
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, char_read; /* file descriptor, character read */
	unsigned long int write_stat; /* write status */
	char *buf = (char *)malloc(sizeof(char) * (letters));

	if (filename == NULL)
		return (0);

	/* Opening of a file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* reading from a file descriptor */
	char_read = read(fd, buf, letters);
	if (char_read == -1)
		return (0);

	/* write call to POSIX stdout */
	write_stat = write(STDOUT_FILENO, buf, letters);
	if (write_stat == (unsigned long int)-1 || write_stat < letters)
		return (0);

	free(buf);
	close(fd);

	return (write_stat);
}

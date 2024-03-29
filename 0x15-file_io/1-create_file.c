#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int create_file(const char *filename, char *text_content)
{
	int i, j;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, len);

	if (i == -1 || j == -1)
		return (-1);

	close(j);

	return (1);
}

#include <stdio.h>
#include <fcntl.h>
int main(void)
{
	int fd1 =  open("txt1.txt", O_RDONLY);
	int fd2 =  open("txt2.txt", O_RDONLY);
	char *line1 = get_next_line(fd1);
	char *line2= get_next_line(fd2);

	while (line1 || line2)
	{
		if(line1)
		{
			printf("%s", line1);
			free(line1);
		}
		if(line2)
		{
			printf("%s", line2);
			free(line2);
		}
		line1 = get_next_line(fd1);
		line2 = get_next_line(fd2);
	}
	close(fd1);
	close(fd2);
} 
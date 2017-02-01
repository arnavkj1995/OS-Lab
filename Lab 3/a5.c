#include <stdio.h>
#include <fcntl.h>

main() {
	int fd1, fd2;
	char c;
	fd1 = open("xyz", O_WRONLY);
	fd2 = open("pqr", O_RDONLY);
	while(read(fd2, &c, 1) != 0) {
		printf("%c\n", c);
		write(fd1, &c, 1);	
	}
}

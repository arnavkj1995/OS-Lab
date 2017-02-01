#include <stdio.h>
#include <fcntl.h>

main() {
	int fd, i=1;
	fd = open("xyz", O_RDONLY);
	char c;
	i = read(fd, &c, 1);
	while(i != 0){
		printf("%c", c);
		i = read(fd, &c, 1);
	}
	printf("\n");	
}

#include <stdio.h>
#include <fcntl.h>

main(){
	int fd, i;
	char c;
	fd = open("xyz", O_WRONLY);
	lseek(fd, 4, SEEK_SET);
	write(fd, "K", 1);
	
}

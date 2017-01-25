#include <stdio.h>
#include <fcntl.h>

main(){
	int fd, p;
	char c;
	fd = open("exp", O_RDONLY);
	p = fork();
	if (p == 0){
		lseek(fd, 4, SEEK_SET);
		printf("%d\n", fd);
	}else {
		sleep(2);
		read(fd, &c, 1);
		printf("%c \n", c);
		printf("}Cs %d\n", fd);
	}
}

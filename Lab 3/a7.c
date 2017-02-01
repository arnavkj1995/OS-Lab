#include <stdio.h>
#include <fcntl.h>

main(){
	int fd = open("pqr", O_RDWR);
	char c1, c2;
	int k, i;
	scanf("%d", &k);
	lseek(fd, k - 1, SEEK_SET);
	read(fd, &c1, 1);
	printf("%c \n", c1);
	i = lseek(fd, -k, SEEK_END) - 1;
	lseek(fd, i, SEEK_SET);
	read(fd, &c2, 1);
	printf("%c \n", c2);
	lseek(fd, k - 1, SEEK_SET);
	write(fd, &c2, 1);
	i = lseek(fd, -k, SEEK_END) - 1;
	lseek(fd, i, SEEK_SET);
	write(fd, &c1, 1);
}

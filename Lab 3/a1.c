#include <stdio.h>
#include <fcntl.h>

main(){
	int fd, i = 0;
	char c='0';
	fd = open("xyz", O_RDONLY);
	while (c != 'a'){
		read(fd, &c, 1);
		i++;
	}
	printf ("%d \n",i);
}

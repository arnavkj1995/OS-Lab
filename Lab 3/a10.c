#include <stdio.h>
#include <fcntl.h>

main(){
	int fd, i;
	char fn[20], str[20];
	gets(fn);
	gets(str);
	fd = open(fn, O_RDWR);
	i = lseek(fd, -1, SEEK_END);
	lseek(fd, i, SEEK_SET);
	int j = 0;
	printf("%d\n", i);
	while(str[j] != 'n'){// || str[j] != '\0'){
		write(fd, &str[j++], 1);	
		printf("%d %c", j, str[j]);
	}
}

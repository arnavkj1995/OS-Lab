#include <stdio.h>
#include <fcntl.h>

main() {
	int d = open("s", O_CREAT|O_WRONLY, 0666);
	printf("%d", d);
	write(3, "ab", 2);
	lseek(3, 1, 0);
	write(3, "yz", 2);
}

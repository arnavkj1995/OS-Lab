#include <stdio.h>
#include <fcntl.h>

main() {
	char m, c;
	FILE *x;
	x = fopen("a", "r");
	fscanf(x, "%c", &c);
	lseek(3, 2, 1);
	fflush(x);
	fscanf(x, "%c", &m);
	printf("%c", m);
}

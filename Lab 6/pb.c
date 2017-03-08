#include <stdio.h>
#include <fcntl.h>

main() {
	FILE *fs;
	fs = fopen("exp", "w");
	write(3, "PQRST", 5);
	fprintf(fs, "A");
	lseek(3, 2, SEEK_SET);
	write(3, "Z", 1);
}

#include <stdio.h>
main(){
	int q;
	printf("%d %d\n", getpid(), getppid());
	q = fork();
	printf("%d %d %d\n", getpid(), getppid(), q);
}

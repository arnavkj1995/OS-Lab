#include <stdio.h>
main(){
	printf("%d %d\n", getpid(), getppid());
	fork() && fork();
	printf("%d %d\n", getpid(), getppid());
	sleep(1);
}

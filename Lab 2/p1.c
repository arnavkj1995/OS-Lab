#include <stdio.h>
main(){
	int p = fork();
	int q = fork();
	if (p == 0) fork();
	fork();
	printf("X");
}

#include <stdio.h>
main(){
	int p,q;
	p = fork();
	fork();
	q = fork();
	if (p == q)
		printf("X\n");
	else
		printf("Y\n");
}

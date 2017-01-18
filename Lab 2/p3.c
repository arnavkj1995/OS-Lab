#include <stdio.h>
main(){
	int p, q, r;
	p = fork(); 
	q = fork();
	r = fork();
	if (!(q == 0 && p == 0)) {
		if (r == 0)		
			fork();
	}
	printf("%d %d\n", getpid(), getppid());
}

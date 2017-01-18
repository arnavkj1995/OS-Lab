#include <stdio.h>
int dork(int n){
	int v = 1;
	int q;
	while (n--) {
		q = fork();
		if (q == 0)
			v = v + 1;
	}
	printf ("%d ", v); 		
}
main(){
	int q;
	q = dork(3);
//	sleep(1);
}

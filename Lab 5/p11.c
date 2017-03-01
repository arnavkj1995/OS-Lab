#include <stdio.h>
#include <fcntl.h>
#include <signal.h>

int c = 0;
int q = 0;
void a(){
    printf("%d\n", q);
    if (q == 0){
        if (c %2 == 0)
            printf("Y");
        else
            printf("Z");
        c++;
    }
    else
        printf("X");
}
main(){
    q = fork();
    signal(SIGINT, a);
    for (;;);
}

#include <stdio.h>
#include <fcntl.h>
#include <signal.h>

int c = 1;
void k(){
    int i;
    for (i = 0; i < c; i++) {
        printf("X");
    }
    printf("\n");
    c++;
}
main(){
    signal(SIGINT, k);
    for (;;);
}

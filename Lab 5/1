#include <stdio.h>
#include <fcntl.h>
#include <signal.h>

void k(){
    printf("Y\n");
    kill(getpid(), SIGKILL);
}
main(){
    signal(SIGINT, k);
    int i;
    for(i = 1; i > 0 ; i++)
        printf("Z\n");
}

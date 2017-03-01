#include <stdio.h>
#include <signal.h>
#include <fcntl.h>

void k(){
    printf("You want to terminate\n");
    int inp;
    scanf("%d", &inp);
    if (inp == 0){
        kill(getpid(), SIGKILL);
    }        
}
main(){
    signal(SIGINT, k);
    for (;;);
}

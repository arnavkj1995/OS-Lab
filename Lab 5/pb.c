#include <stdio.h>
#include <fcntl.h>
#include <signal.h>

void g(){
    printf("AA\n");
}

main(){
    alarm(3);
    signal(SIGALRM, g);
    for(;;);
}

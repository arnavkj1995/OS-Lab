#include <stdio.h>
#include <fcntl.h>
#include <signal.h>

void g(){
    printf("AA\n");
    alarm(3);
}
void x(){
    kill(getpid(), SIGKILL);
}
main(){
    signal(SIGINT, g);
    signal(SIGALRM, x);
    for (;;);
}

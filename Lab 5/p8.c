#include <stdio.h>
#include <fcntl.h>
#include <signal.h>

int sum = 0;
void u(){
    printf("%d\n", sum);
}
main(){
    int i, inp, j, a;
    signal(SIGFPE, u);
    for (i = 0 ; i >= 0 ; i++){
        scanf("%d", &inp);
        for (j = 1; j < 5 ; j++)
            a = inp / (inp - j);
        printf("%d\n", 2 * inp);
        sum = sum + inp;
    }
}

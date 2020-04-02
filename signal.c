#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void processSignal(int s){
    printf("Recibi segnal %d\n", s);
}

void processSignal2(int s){
    printf("No puede matarme %d\n", s);
}

int main(){
    signal(10, processSignal);
    signal(15, processSignal2);
    while(1){
        sleep(3);
        printf("Trabajando\n");
    }
    return 1;
}
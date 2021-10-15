#include <pthread.h>
#include <stdio.h>
#include <unistd.h>


#define NUM_THREADS 100
int saldo;

void *printHola(void *arg){
    int saldolocal=saldo;
    saldolocal+=100;
    saldo=saldolocal;

    pthread_exit(NULL);

}

int main(){
    pthread_t threads[NUM_THREADS];
    for(int i=0;i<NUM_THREADS;i++){
        pthread_create(&threads[i],NULL, printHola,NULL);
    }

    for(int i=0;i<NUM_THREADS;i++){
        pthread_join(threads[i],NULL);
    }

    printf("Valor de saldo:%d\n",saldo);
    pthread_exit(NULL);
    
}
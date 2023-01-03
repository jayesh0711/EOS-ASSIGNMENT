#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

pthread_barrier_t barr4;
void *lcd(void *data)
{
    printf("LCD start\n");
    sleep(2);
    printf("LCD end\n");
    pthread_barrier_wait(&barr4);
    printf("LCD functionalities start\n");

}
void *serial(void *data)
{
    printf("SERIAL start\n");
    sleep(5);
    printf("serial end\n");
    pthread_barrier_wait(&barr4);
    printf("serial functionalities start\n");
    
}
void *temp(void *data)
{
    printf("TEMP start\n");
    sleep(7);
    printf("temp end\n");
    pthread_barrier_wait(&barr4);
    printf("temp functionalities start\n");
    
}
void *network(void *data)
{
    printf("NETWORK start\n");
    sleep(2);
    printf("network end\n");
    pthread_barrier_wait(&barr4);
    printf("network functionalities start\n");
    
}
int main(){
    pthread_t lcd_id,serial_id,temp_id,netw_id;
    pthread_barrier_init(&barr4,NULL,4);
    pthread_create(&lcd_id,NULL,lcd,NULL);
    pthread_create(&serial_id,NULL,serial,NULL);
    pthread_create(&temp_id,NULL,temp,NULL);
    pthread_create(&netw_id,NULL,network,NULL);
    pthread_join(lcd_id,NULL);
    pthread_join(serial_id,NULL);
    pthread_join(temp_id,NULL);
    pthread_join(netw_id,NULL);
    pthread_barrier_destroy(&barr4);
    return 0;

}
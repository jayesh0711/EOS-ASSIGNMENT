#include <pthread.h>
#include<stdio.h>

void *rtc_thread(void *data)
{
    printf("insert thraed\n");
    //int a=3,b=7;
    //int c =a+b;
    //printf("value of c id %d\n",c);
}
int main()
{
    pthread_t id_rtc;
    printf("before\n");
    printf("before thraed\n");
    pthread_create( &id_rtc,NULL,rtc_thread,NULL);
    pthread_join(id_rtc,NULL);
    

}

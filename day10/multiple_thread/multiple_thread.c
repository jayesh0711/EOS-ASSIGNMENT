#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>   //for fork
#include <unistd.h>    //for fork




void *add(void *data)
{
    //fork();
    int a=30,b=20;
    int c=a+b;
    printf("value of add:%d\n",c);
} 
void *sub(void *data)
{
    //fork();
    int a=30,b=20;
    int c=a-b;
    printf("value of sub:%d\n",c);
}
 void *mul(void *data)
{
    //fork();
    int a=30,b=20;
    int c=a*b;
    printf("value of mul:%d\n",c);
}
void *divi(void *data)
{
    //fork();
    int a=30,b=20;
    int c=a/b;
    printf("value of div:%d\n",c);
}
int main(void)
{
    pthread_t thread_1,thread_2,thread_3,thread_4;
    printf("in main function\n");
    printf("before the thread\n");
    fork();
    pthread_create(&thread_1,NULL,add,NULL);
    pthread_create(&thread_2,NULL,sub,NULL);
    pthread_create(&thread_3,NULL,mul,NULL);
    pthread_create(&thread_4,NULL,divi,NULL);
    pthread_join(thread_1,NULL);
    pthread_join(thread_2,NULL);
    pthread_join(thread_3,NULL);
    pthread_join(thread_4,NULL);
    printf(" after the thread");
    return 0;   
}
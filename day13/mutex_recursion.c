#include<pthread.h>
#include<unistd.h>
#include<stdio.h>

 
     int count =0;
     pthread_mutex_t lock;
     //pthread_t lock;
    pthread_mutexattr_t mutexat;
void *IncThread(void *data)
    
 {  
     while(1)
    {
        pthread_mutex_lock(&lock);
        pthread_mutex_lock(&lock);
        count++;
        printf("Inc :%d\n",count);
        pthread_mutex_unlock(&lock);
        pthread_mutex_unlock(&lock);
  }
 }  
void *DecThread(void *data)
{
     while(1)
     {
        pthread_mutex_lock(&lock);
        count--;
        printf("Dec :%d\n",count);
        pthread_mutex_unlock(&lock);
    }
}
void main(void)
{
    pthread_t IncId,DecId;
    printf("before the thread is created\n");
    pthread_attr_t thread_attr;
    pthread_mutex_init(&lock,NULL);
    pthread_mutex_attr_init(&mutexat);
    pthread_mutex_attr_settype(&mutexat,PTHREAD_MUTEX_RECURSIVE);

    pthread_create(&IncId,NULL,IncThread,NULL);
    //printf("IncId=%d\n",IncId);
    pthread_create(&DecId,NULL,DecThread,NULL);

    //printf("IncId=%d\n",IncId);

    //sleep(1);
    pthread_join(IncId,NULL);
    pthread_join(DecId,NULL);
    pthread_mutex_destroy(&lock);
    printf("after thread joining\n");
    pthread_exit(NULL);
    return 0;
}


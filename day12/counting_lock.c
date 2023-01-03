#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<semaphore.h>
 
     int count =0;
     sem_t sem_lock;
     sem_t sem_lock1;
     int a,b;
    void *IncThread(void *data)
    
 {  
     while(1)
    {
        sem_wait(&sem_lock1);
         sem_wait(&sem_lock1);
        printf("enter the value of a and b \n");
        scanf("%d%d",&a,&b);
         sem_post(&sem_lock);
  }
 }  
void *DecThread(void *data)
{
     while(1)
     {   
        sem_wait(&sem_lock);
        int m=a+b;
        printf("a+b =%d\n",m);
        sem_post(&sem_lock1);
        sem_post(&sem_lock1);
  }

    }

void main(void)
{
    pthread_t IncId,DecId;
    sem_init(&sem_lock,0,0);
    sem_init(&sem_lock1,0,3);
    pthread_create(&IncId,NULL,IncThread,NULL);
    pthread_create(&DecId,NULL,DecThread,NULL);
    pthread_join(IncId,NULL);
    pthread_join(DecId,NULL);
   sem_destroy(&sem_lock);
   sem_destroy(&sem_lock);

    
}
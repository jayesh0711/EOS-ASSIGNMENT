#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<semaphore.h>
 
     int count =0;
     sem_t sem_lock;
    // pthread_t lock;
    void *IncThread(void *data)
    
 {  
     while(1)
    {
        sem_wait(&sem_lock);
        count++;
        printf("Inc :%d\n",count);
         //pthread_mutex_unlock(&lock);
         sem_post(&sem_lock);
  }
 }  
void *DecThread(void *data)
{
     while(1)
     {   
        sem_wait(&sem_lock);
      //  pthread_mutex_lock(&lock);
        count--;
        printf("Dec :%d\n",count);
        //sempthread_mutex_unlock(&lock);
        sem_post(&sem_lock);
  }

    }

void main(void)
{
    pthread_t IncId,DecId;
    sem_init(&sem_lock,0,1);
    
   // pthread_mutex_init(&lock,NULL);
    pthread_create(&IncId,NULL,IncThread,NULL);
    //printf("IncId=%d\n",IncId);
    pthread_create(&DecId,NULL,DecThread,NULL);

    //printf("IncId=%d\n",IncId);

    //sleep(1);
    pthread_join(IncId,NULL);
    pthread_join(DecId,NULL);
   // pthread_mutex_destroy(&lock);
   sem_destroy(&sem_lock);
    //pthread_exit(NULL);
    
}
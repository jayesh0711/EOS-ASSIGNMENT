#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
 
     int a,b;
    pthread_rwlock_t rw_lock;

    void *IncThread(void* data)
    
 {  
    
     while(1)
     {
       pthread_rwlock_wrlock(&rw_lock);
       printf("enter the value");
       scanf("%d %d",&a,&b);
       pthread_rwlock_unlock(&rw_lock);
       //sleep(1);
     } 
  
 }  
void *DecThread(void* data)
{
     while(1)
     {   
        pthread_rwlock_rdlock(&rw_lock);
        int m=a+b;
        printf("the value is : %d\n",m);
         printf("the raed value :%d and :%d \n:",a,b);
        pthread_rwlock_unlock(&rw_lock);
        //sleep(1);
     }

    }

void main(void)
{
    pthread_t IncId,DecId;
    pthread_rwlock_init(&rw_lock,NULL);
    pthread_create(&IncId,NULL,IncThread,NULL);
    pthread_create(&DecId,NULL,DecThread,NULL);
    sleep(2);
    pthread_join(IncId,NULL);
    pthread_join(DecId,NULL);
    pthread_rwlock_destroy(&rw_lock);

}
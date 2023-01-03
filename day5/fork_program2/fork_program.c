#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
int main()
{
    
    /*if(fork()&&fork())
    fork();
    printf("hello jayesh \n");
    return 0;
    */
    
   /* fork();
    fork();
    //fork();
    printf("hello shiva\n");
    printf("pid:%d.....ppid:%d\n....pid:%d....ppid:%d\n",getpid(),getppid(),getpid(),getppid());
    return 0;
    */
    fork();
    fork();
    fork();
    fork();
    printf("hello \n");
    return 0;
}
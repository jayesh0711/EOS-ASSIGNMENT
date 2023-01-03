#include<stdio.h>
 #include <sys/types.h>
#include <unistd.h>

 int main(int argc , char const *argv[])
 {
    pid_t p;

    p=fork();
    if(p=0)
    {
        //sleep(5);
       printf("parent process %d\n",getppid());

      printf("child process %d\n",getpid());
    }
    else
    {
      sleep(5);
      printf("parent process%d\n",getpid());
      printf("child process id=%d\n",p);
    }
 }
#include <sys/types.h>
#include <unistd.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sum[2];
  int buff1[2],int buff2[2];
  pid_t id;
  pipe[fd1];
  pipe[fd2];
  id=fork();
  printf("befor fork\n");
  if(id=0)
  {
    close[fd1[1]];
    close(fd2[0]);
    read(fd1[0],buff1,sizeof(buff1));
    close(fd1[0]);
    buff2[0]=buff1[0]+buff1[0];
    printf("res=%d buff[1]=%d buff[0]=%d \n",buff2[0],buff1[1],buff1[0] ); 
    write(fd2[1],buff2,sizeof(buff2));
    close(fd2[1]);
    printf("child process \n");


  } 
  else{
       close[fd1[0]];
       close(fd2[1]); 
       write(fd1[1],a,sizeof(a));
        close(fd1[1]); 
        read(fd1[0],sum,sizeof(sum)); 
        close(fd2[0]); 
        printf("final addition: %d \n",sum[0]);
       printf("parent process \n");

  }
      return 0;   
    }
s
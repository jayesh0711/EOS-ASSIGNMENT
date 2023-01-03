#include <unistd.h>
#include<stdio.h>
 #include <sys/types.h>
#include <sys/stat.h>
 #include <fcntl.h>
 #include<errno.h>
 int main(int argc,char const *argv[])
 {
    int fd1[2],fd2[2],n,m;
    char buffer[100];
    pid_t p;
    pipe(fd1);
    pipe(fd2);
    p=fork();
    if(p>0)
    {
        close(fd1[0]);
        close(fd2[1]);
        printf("passing value to child ..>pipe1\n");
        if(write(fd1[1],argv[1],16)<0)
        {
        }
        m=read(fd2[0],buffer,100);
        write(1,buffer,m);
        
    }
    else
    {
        close(fd1[1]);
        close(fd2[0]);
        n=read(fd1[0],buffer,100);
        write(1,buffer,n);
        //printf("%s",buffer);
        printf("passing value to parent..>pipe2\n");
        write(fd2[1],"hello my parent \n",16);
    
    }
 }







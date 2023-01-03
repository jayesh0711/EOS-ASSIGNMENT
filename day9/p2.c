#include<stdio.h>
#include <sys/stat.h>
 #include <fcntl.h> 
 #include <sys/types.h>

int main(int argc , char const *argv[])
{
    int fd =0;
    unsigned char buff [128];
    fd =open("desdfifo",O_RDONLY);
    read(fd,buff,128);
   // write(fd,"desd fifo\n",10);
    printf("recieved :%s\n",buff);
    close(fd);
    return 0;
}
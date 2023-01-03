#include <mqueue.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
 #include <mqueue.h>
#include<stdio.h>
#include<stdlib.h>
#define BUFF_SIZE 64
char buff[BUFF_SIZE];
struct mq_attr desd_mq_attr;
int main()
{
    mqd_t desd_mq_desc;
    int mq_rv ,mq_close_er;
    desd_mq_attr.mq_flags=0;
    desd_mq_attr.mq_maxmsg=4;
    desd_mq_attr.mq_maxmsg=64;
    desd_mq_attr.mq_curmsgs=0;
    desd_mq_desc=mq_open("/desd_mq",O_CREAT|O_RDWR,S_IRUSR|S_IWUSR,&desd_mq_attr);
    if(-1==desd_mq_desc)
    {
        perror("error:in opening");
        exit(EXIT_FAILURE);
    }

mq_rv=mq_receive(desd_mq_desc,buff,64,0);

if(-1==mq_rv)
    {
        perror("error:in opening");
        exit(EXIT_FAILURE);
    }
     printf("recieved msg%s\n",buff);
 mq_close_er=mq_close(desd_mq_desc);
    if(-1==mq_close_er)
    {
        perror("error:in opening");
        exit(EXIT_FAILURE);
    }
    
    }


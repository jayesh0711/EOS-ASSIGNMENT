 #include<stdio.h>
 #include <sys/types.h>
 #include <unistd.h>
    int main(int argc,char const*agrv[])
    {
        pid_t id;
        getppid();
        printf("before fork\n");
        id=fork();
        printf("after fork pid: %d,ppid:%d id:%d\n",getpid,getppid,id);
        return 0;
    }
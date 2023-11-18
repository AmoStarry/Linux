#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int arg,char *argv[])
{
    int fd;
    char buf[32] ={0};
    ssize_t ret;

    fd =open("a.c",O_RDWR);
    if(fd < 0)
    {
        printf("open is error\n");
    }

    printf("fd is %d\n",fd);

    ret =read(fd,buf,32);
    if(ret < 0)
    {
        printf("read is error\n");
        return -2;
    }
    printf("read is %s\n",buf);
    printf("ret is %ld\n",ret);

    return 0;

}
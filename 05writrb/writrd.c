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
    write(fd,"hello\n",6);//标注输出前面的什么都不加直接输出到屏幕上

    close(fd);
    return 0;

}
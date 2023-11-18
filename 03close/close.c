#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int arg,char *argv[])
{
    int fd;
    fd =open("a.c",O_CREAT|O_RDWR,0666); //当有O_CREAT的时候要给它权限0666,前面的0表示二进制数，表示文件可读可写也可以用英文字母表示
    //fd =open("a.c",O_RDWR);
    if(fd < 0)
    {
        printf("open is error\n");
    }
    printf("fd is %d\n",fd);

    close(fd);
    return 0;

}
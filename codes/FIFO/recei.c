#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    unsigned char rbuff[64];
    int fd;
    fd = open("desd",O_RDONLY);
    read(fd,rbuff,64);
    printf("recieve string:%s",rbuff);
    close (fd);
    
    return 0;
}

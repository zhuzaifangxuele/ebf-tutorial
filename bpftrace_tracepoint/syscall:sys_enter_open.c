#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void main()
{
        int fd;
        char file_path[] = "/tmp/file_test";
        fd = open(file_path, O_CREAT, O_RDWR);
        if (fd < 0)
                printf("failed to open file");

        return;
}

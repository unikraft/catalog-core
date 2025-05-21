#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
   char buf[1024];
   int fd;

   fd = open("/westworld.txt", O_RDWR | O_CREAT, 0777);
   write(fd, "These violent delights have violent ends.", 41);
   close(fd);

   fd = open("/westworld.txt", O_RDWR | O_CREAT, 0777);
   read(fd, buf, 41);
   buf[41] = '\0';
   printf("%s\n", buf);
   close(fd);

   return 0;
}

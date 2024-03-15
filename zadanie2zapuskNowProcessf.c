#include <unistd.h>
#include <stdio.h>
int main()
{
int execl (const char *path,const char *arg,...);

int ret;

ret=execl ("/bin/vi","vi","/home/kidd/hooks.txt", NULL);if(ret==-1)
perror("execl");

}

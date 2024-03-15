#include <stdio.h>
#include <stdint.h>
int main(int argc,char** argv)
{
 printf("%21s: %3lu\n","Integer" , sizeof(int));
 printf("%21s: %3lu\n","Unsigned" , sizeof(unsigned));
 printf("%21s: %3lu\n","Short",sizeof(short));
 printf("%21s: %3lu\n","Unsigned Short",sizeof(unsigned short ));
 printf("%21s: %3lu\n","Long",sizeof(long ));
 printf("%21s: %3lu\n","Unsigned Long",sizeof(unsigned long ));
 printf("%21s: %3lu\n","Char",sizeof(char));
 printf("%21s: %3lu\n","float",sizeof(float));
 printf("%21s: %3lu\n","Double",sizeof(double));
 printf("%21s: %3lu\n","Long double",sizeof(long double));
 return 0;

}

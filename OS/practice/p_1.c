#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{pid_t temp;
    temp=fork();
    printf("Hello world\n");
    return 0;
}
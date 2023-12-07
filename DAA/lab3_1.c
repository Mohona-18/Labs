#include<stdio.h>
int main()
{
    printf("Enter a no\t");
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n/2;i++)
    {
        if(i*i>n)
        { printf("\nthe (floor) sqrt is %d ",(i-1));
            break;}
        else if(i*i == n)
        { printf("The sqrt is %d ",i);
        break;}
    }
}

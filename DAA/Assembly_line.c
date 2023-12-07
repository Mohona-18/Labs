#include<stdio.h>
#include<stdlib.h>
#define max 4

int min(int a,int b)
{
    if(a>b)
    return b;
    else
    return a;
}
void line_way(int e[2],int a[2][max],int x[2],int t[2][max],int n)
{int f1[max],f2[max];
    f1[0] = e[0] + a[0][0];
    f2[0] = e[1] + a[1][0];
    for(int i=1;i<n;i++)
    {
        f1[i]=min(f1[i-1]+a[0][i],f2[i-1]+a[0][i]+t[1][i]);
          f2[i]=min(f2[i-1]+a[1][i],f1[i-1]+a[1][i]+t[0][i]);
    }
    printf("Optimal Path Cost:%d\n",min(f1[n-1]+x[0],f2[n-1]+x[1]));
    //For Path
    printf("Path:\t");
   for(int i=0;i<n-1;i++)
    {
        if(f1[i]<f2[i])
        printf("%d-> ",1);
       else
        printf("%d-> ",2); 
    }
    if(f1[n-1]+x[0]>f2[n-1]+x[1]) printf("%d\n",2);
    else printf("%d\n",1);
    //Table
    printf("\nTable\n");
     for(int i=0;i<n;i++)
    printf("%d\t",f1[i]);
       printf("\n");
     for(int i=0;i<n;i++)
    printf("%d\t",f2[i]);
}
int main()
{
    printf("Enter no of stations\n");
    int n;
    scanf("%d",&n);
    int s[2][n],t1[2][n],e[2],x[2];
    printf("Enter the entry values:\n");
    for(int i=0;i<2;i++)
    scanf("%d",&e[i]);
    printf("Enter the exit values:\n");
    for(int i=0;i<2;i++)
    scanf("%d",&x[i]);
    printf("Enter the duration in each station:Line 1\n");
    for(int i=0;i<n;i++)
    scanf("%d",&s[0][i]);
    printf("Enter the duration in each station:Line 2\n");
      for(int i=0;i<n;i++)
    scanf("%d",&s[1][i]);
    printf("Enter the transition time:Line 1 to Line 2\n");
      for(int i=0;i<n;i++)
    scanf("%d",&t1[0][i]);
        printf("Enter the transition time:Line 2 to Line 1\n");
      for(int i=0;i<n;i++)
    scanf("%d",&t1[1][i]);
    line_way(e,s,x,t1,n);
}
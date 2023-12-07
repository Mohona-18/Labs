#include<stdio.h>
int sum(int a[],int n)
{
    int i,j,s,sum=0,s_i=-1,s_j=-1;
    for( i=0;i<n;i++)
    {
        for (j=n-1;j>=i;j--)
        {
            s+=a[j];
        }
        if(sum<s)
        {
            sum=s;
            s_i=i;
            s_j=j+1;
        }

    }
    //return sum;
    printf("\n%d",sum);
}
int main()
{
    int n=11; int i,j,s,sum=0,s_i=-1,s_j=-1;
    int a[n];
    for( i=0;i<n;i++)
    scanf("%d",&a[i]);
    //sum(a,n);
    
    for( i=0;i<n;i++)
    {
        for (j=n-1;j>=i;j--)
        {
            s+=a[j];
        }
        if(sum<s)
        {
            sum=s;
            s_i=i;
            s_j=j+1;
        }

    }
    //return sum;
    printf("\n%d",sum);
}
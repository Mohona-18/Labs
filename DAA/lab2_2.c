#include<stdio.h>
int main()
{
int n,i,j,k,key,c=0;
printf("Enter number of element : \n");
scanf("%d",&n);
int a[n];
printf("Enter array elements :\n ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter The Key =\t");
scanf("%d", &key);
for(i=0;i<n-2;i++)
{
    for(j=i+1;j<n-1;j++)
    {
        for(k=j+1;k<n;k++)
        {
            if(a[i]+a[j]+a[k]==key)
            {c=1;
            printf("%d,%d,%d\n",i,j,k);}
        }
    }
}
if(c==0)
{
    printf("No such values found\n");
}
}

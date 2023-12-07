#include<stdio.h>
int main()
{
int n,i;
printf("Enter number of element : \n");
scanf("%d",&n);
int a[n];
printf("Enter array elements :\n ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int prod=1;
for(i=0;i<n;i++)
prod=prod*a[i];
printf("New series : \n");
for(i=0;i<n;i++)
a[i]=prod/a[i];
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}
#include<stdio.h>
int main()
{
int n;
printf("Enter the no of elements in the array:\t");
scanf("%d", &n);
printf("Enter the elments in the array:\n ");
int a[n];
for(int i=0;i<n;i++)
scanf("%d", &a[i]);
int key;
printf("Enter The Key =\t");
scanf("%d", &key);
int c = 0;
printf("The position of the elements:\n");
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(a[i]*a[i]+a[j]*a[j]==key)
        {
            c = 1;
             printf("%d,%d\n", (i+1), (j+1));
        }
    }
}
if(c == 0)
printf("No such index found!");return 0;
}
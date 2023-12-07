#include<stdio.h>
void insertion_sort(int *a,int n);
void main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemnets\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
}
void insertion_sort(int *a, int n){
int t,j;
    for(int i=1;i<n;i++)
        { 
           t=a[i];
           j=i-1;
           while(j>=0&&t<a[j])
          { a[j+1]=a[j];
           j--;}
           a[j+1]=t;
        }
        printf("The sorted array in ascending order\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
}

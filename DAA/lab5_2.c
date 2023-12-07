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
    int t;
    insertion_sort(a,n);
   /* for(int i=(n-k);i<(n-k)/2;i++)
    {
        t=*(a+i);
*(a+i)=*(a-i+n-1);
*(a-i+n-1)=t;
    }*/
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
        int k=2;
    for(int i=k;i<(n-k)/2;i++)
{
t=*(a+i);
*(a+i)=*(a-i+n-k-1);
*(a-i+n-k-1)=t;
}
        printf("The sorted array in ascending order\n");
        for(int i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
}
/*void reverse(int*a , int n)
{int t;
    for(int i=n-k-1;i<n/2;i++)
{
t=*(a+i);
*(a+i)=*(a-i+n-1);
*(a-i+n-1)=t;
}
}*/

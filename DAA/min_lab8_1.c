#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *x,int *y)
{
    int t=*x;*x=*y;*y=t;
}
void heapify(int a[],int n,int i)
{
    int smallest=i;
    int lc=(2*i)+1,rc=(2*i)+2;
    if(lc<n && a[lc]<a[smallest])
    smallest=lc;
    if(rc<n && a[rc]<a[smallest])
    smallest=rc;
    if(smallest!=i)
   { swap(&a[smallest],&a[i]);
    heapify(a,n,smallest);
   }
}
void heap_print(int a[],int n)
{
    for(int i=0;i<n;i+=2)
    {heapify(a,n,i);
    printf("%d th element :%d\t\n",i,a[i]);
    printf("Array status\n");
   print(a,n);
    printf("\n");
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void main()
{   
    printf("Enter n\n");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Enter elements\n");
     for(int i=0;i<n;i++) 
     a[i]=rand()%1000;
 //  scanf("%d",&a[i]);
    printf("Original Array\n");
    print(a,n);
    printf("\n");
     heap_print(a,n);
}




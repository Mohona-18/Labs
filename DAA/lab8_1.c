#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int *x,int *y)
{
    int t=*x;*x=*y;*y=t;
}
void heapify(int a[],int n,int i)
{
    int largest=i;
    int lc=(2*i)+1,rc=(2*i)+2;
    if(lc<n && a[lc]>a[largest])
    largest=lc;
    if(rc<n && a[rc]>a[largest])
    largest=rc;
    if(largest!=i)
   { swap(&a[largest],&a[i]);
    heapify(a,n,largest);
   }
}
void heap_print(int a[],int n)
{
    for(int i=0;i<n;i+=2)
    {heapify(a,n,i);
    printf("%d th element :%d\t\n",i,a[i]);
    printf("Array status\n");
     print_a(a,n);
    printf("\n");
    }
}
void print_a(int *a,int n)
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
  // scanf("%d",&a[i]);
    a[i]=rand()%1000;
   //    print_a(a,n);
     //  printf("\n");
     heap_print(a,n);
}



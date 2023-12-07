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
void heap_sort(int a[],int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    heapify(a,n,i);
    for(int i=n-1;i>0;i--)
    {
        swap(&a[0],&a[i]);
        heapify(a,i,0);
    }
}
void main()
{   
    printf("Enter n\n");
    int n;
    scanf("%d",&n);
    int a[n];
     for(int i=0;i<n;i++) //a[i]=rand()%1000;
   scanf("%d",&a[i]);
 //  clock_t  t=clock();
     heap_sort(a,n);
   // t=clock()-t;
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
    //printf("Heap sort execution time for on random data  Asc\t%f\n",((double)t)/CLOCKS_PER_SEC);
}


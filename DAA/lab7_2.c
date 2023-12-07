#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 100
int partition(int arr[],int lb,int ub)
{
    int p=arr[lb];
    int start =lb,end=ub;
    while(start<end)
    {
        while(arr[start]<=p)
        start++;
        while(arr[end]>p)
        end--;
        if(start<end)
        swap(&arr[start],&arr[end]);
    }
    swap(&arr[end],&arr[lb]);
    return end;
}
void swap(int *x,int*y)
{
    int t;
    t=*x;*x=*y;*y=t;
}
int partition_r(int arr[],int lb,int ub)
{
    int r=lb+(rand()%(ub-lb));
    swap(&arr[r],&arr[lb]);
    return partition(arr,lb,ub);
}
void quick_r (int arr[],int low,int up)
{
	int pivloc;
	if(low<up)
	{
	pivloc=partition_r(arr,low,up);
	quick_r(arr,low,pivloc-1);
	quick_r(arr,pivloc+1,up);
    }
}
void quick (int arr[],int low,int up)
{
	int pivloc;
	if(low<up)
	{
	pivloc=partition(arr,low,up);
	quick(arr,low,pivloc-1);
	quick(arr,pivloc+1,up);
    }
}
int main()
{
	int arr[size],n,i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int mid=n/2;
    time_t q,qr,ts;
    q=clock();
    quick(arr,0,mid);
    q=clock()-q;
    qr=clock();
    quick_r(arr,mid+1,n-1);
    qr=clock()-qr;
    quick_r(arr,0,n-1);
    printf("Sorted Array\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\nTime to sort 1st half in Quick Sort: %f",(double)(q)/CLOCKS_PER_SEC);
      printf("\nTime to sort 2st half in Quick Sort Randomised: %f",(double)(qr)/CLOCKS_PER_SEC);
}
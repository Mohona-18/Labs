#include<stdio.h>
#include<stdlib.h>
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
    quick(arr,0,n-1);
    printf("Sorted Array\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
}
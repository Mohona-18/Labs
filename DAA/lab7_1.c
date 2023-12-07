#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 100000
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
	int arr[size],n,i,j;
    time_t b,e;
   /* for(i=500;i<=10000;i+=500)
    {
        for(j=0;j<i;j++)
        arr[j]=rand()%10000;
        b=clock();
        quick(arr,0,j-1);
        e=clock();
        printf("Input size:%d\tTime:%f\n",i,((double)(e-b))/CLOCKS_PER_SEC); 
    }*/
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
//OUTPUT :in GDB
/*
Input size:100  Time:0.000328
Input size:600  Time:0.000609
Input size:1100 Time:0.000692
Input size:1600 Time:0.000896
Input size:2100 Time:0.001772
Input size:2600 Time:0.002279
Input size:3100 Time:0.002880
Input size:3600 Time:0.003969
Input size:4100 Time:0.005529
Input size:4600 Time:0.005917
Input size:5100 Time:0.003723
Input size:5600 Time:0.007695
Input size:6100 Time:0.009074
Input size:6600 Time:0.011303
Input size:7100 Time:0.013864
Input size:7600 Time:0.014858
Input size:8100 Time:0.015685
Input size:8600 Time:0.018482
Input size:9100 Time:0.019604
Input size:9600 Time:0.020878
*/
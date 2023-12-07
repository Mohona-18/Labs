//atreyee
#include<stdio.h>
#include<stdlib.h>
#define size 100
int partition(int arr[],int low,int up)
{
	int t,i=low+1,j=up,pivot=arr[low];
	while(i<=j)

	{
		while(arr[i]<pivot&&i<up)
		i++;
		while(arr[j]>pivot)
		j--;
		if(i<j)
		{
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
			i++;
			j--;
		}
		else
		i++;
	}
	arr[low]=arr[j];
	arr[j]=pivot;
	return j;
}
void quick (int arr[],int low,int up)
{
	int pivloc;
	if(low>=up)
	return;
	pivloc=partition(arr,low,up);
	quick(arr,low,pivloc-1);
	quick(arr,pivloc+1,up);
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
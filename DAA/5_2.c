#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,k,t;
	printf("Enter n : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements :\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(n-1-i);j++)
		{
			if(a[j+1]<a[j])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("Enter k : ");
	scanf("%d",&k);
    int b[n];t=0;
	printf("The first %d minimum elements :\n",k);
	for(int i=0;i<k;i++)
	{b[t++]=a[i];	printf("%d ",a[i]);}
	printf("\n");
	printf("The remaining %d elements in descending :\n",n-k);
	for(int i=n-1;i>=k;i--)
		{ b[t++]=a[i];printf("%d ",a[i]);}
	printf("\n");
    for(int i=0;i<n;i++)
	{	printf("%d ",b[i]);}
	return 0;
}
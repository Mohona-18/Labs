#include <stdio.h>
#include<time.h>
 #define max 10000
 int b[max];
 
 void merging(int a[],int low, int mid, int high)
  { 
      int i=low,j=mid+1,k=low;
      while(i<=mid && j<=high)
      {
          if(a[i]<=a[j])
          {
              b[k++]=a[i++];
          }
          else
          {
              b[k++]=a[j++];
          }
          
      }
      if(i>mid)
      {
          while(j<=high)
          b[k++]=a[j++];
      }
       if(j>high)
      {
          while(i<=mid)
          b[k++]=a[i++];
      }
      for(i=low;i<=high;i++)
      a[i]=b[i];
 }

 void sort(int a[],int low, int high) 
 {
    int mid;
    if(low < high) {
    mid = (low + high) / 2;
    sort(a,low, mid);
    sort(a,mid+1, high);
    merging(a,low, mid, high);
    } 
    else 
 return;
 }
 int main() {
 int i;
 clock_t beg,end;

 beg=clock();
 printf("Enter the size of array\n");
 int n;
 scanf("%d",&n);
 int a[n];
 printf("The elements\n");
 for(i=0;i<n;i++)
 a[i]=rand()%1000;
 printf("List before sorting\n");
 for(i = 0; i <n; i++)
 printf("%d ", a[i]);
 
 sort(a,0, n-1);
  end=clock();
 printf("\nList after sorting\n");
 for(i = 0; i <n; i++)
 printf("%d ", a[i]);
printf("\n");
 printf("Time taken for sorting: %.5f sec\n",difftime(end,beg)/CLOCKS_PER_SEC);
 return 0;
 }
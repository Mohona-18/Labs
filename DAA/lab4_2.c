#include <stdio.h>
#include<time.h>
 #define max 100000
 int a[max];
 int b[max];
 void merging(int low, int mid, int high)
  {
 int l1, l2, i;
 for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) 
 {
    if(a[l1] <= a[l2])
    b[i] = a[l1++];
    else
    b[i] = a[l2++];
    }
    while(l1 <= mid)
    b[i++] = a[l1++];
 
    while(l2 <= high)
    b[i++] = a[l2++];
 
    for(i = low; i <= high; i++)
    a[i] = b[i];
 }

 void sort(int low, int high) 
 {
    int mid;
    if(low < high) {
    mid = (low + high) / 2;
    sort(low, mid);
    sort(mid+1, high);
        merging(low, mid, high);
    } 
    else 
 return;

 }
 void insertion(int l, int h)
 {
     int t,j;
    for(int i=l+1;i<h;i++)
        { 
           t=a[i];
           j=i-1;
           while(j>=l&&t<a[j])
          { a[j+1]=a[j];
           j--;}
           a[j+1]=t;
        }
 }
  int main() {
 int i;
 printf("Enter the size of array\n");
 int n;
 scanf("%d",&n);
 
 printf("The elements\n");
 for(i=0;i<n;i++)
 a[i]=rand()%100;
 printf("List before sorting\n");
 for(i = 0; i <n; i++)
 printf("%d ", a[i]);

insertion(0,n/2);

 sort((n/2)+1, n-1);
 sort(0,n-1);
 printf("\nList after sorting\n");
 for(i = 0; i <n; i++)
 printf("%d ", a[i]);


printf("\n");
 return 0;
 }
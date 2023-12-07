#include<stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t time_sorted, time_reverse, time_random;
clock_t t;

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
void printArray(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	  printf("%d ",a[i]);
	printf("\n");
}

void DescArray(int a[], int n)
{ 
        for (int i=0; i<n; i++) 
        {
          for (int j=i+1; j<n; j++) 
           {
             if (a[i] < a[j]) 
               {
                  int temp = a[i];
                  a[i] = a[j];
                  a[j] = temp;
               }
           }
        }
}

void AscArray(int a[], int n)
{
        for (int i=0; i<n; i++) 
        {
          for (int j=i+1; j<n; j++) 
           {
             if (a[i] > a[j]) 
               {
                  int temp = a[i];
                  a[i] = a[j];
                  a[j] = temp;
               }
           }
        }
}
int get_max(int a[],int n)
{
    return a[n-1];
}
 void shiftup(int a[],int i)
 {
     while(i>0&&a[(i-1)/2]<a[i])
     {
         swap(&a[(i-1)/2],&a[i]);
         i=(i-1)/2;
     }
 }
 void changepriority(int a[],int n,int i,int p)
 {
     int old=a[i];
     a[i]=p;
     if(a[i]>old) {  for(int i=(n/2)-1;i>=0;i--)
    heapify(a,n,i);
     shiftup(a,i);}
     else {
     //heapify(a,n,i);
     for(int i=(n/2)-1;i>=0;i--)
    heapify(a,n,i);}
 }
/* void insert(int *a,int n,int p)
 {
     n=n+1;
     a[n-1]=p;
     shiftup(a,n-1);
 }*/

int main()
{
    int n,max;   int z,p,k,r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a[n];
    int choice;
    printf("\n0. Quit");
    printf("\n1. n Random numbers=> Array");
    printf("\n2. Display the Array");
    printf("\n3. Sort the array in Ascending order using Max-heap Sort Technique");
    printf("\n4. Sort the array in Descending order using any algorithm");
    printf("\n5. Time Complexity to sort ascending of random data");
    printf("\n6. Time Complexity to sort ascending of data already in ascending order");
    printf("\n7. Time Complexity to sort ascending of data already in descending order");
    printf("\n8. Time Complexity to sort ascending of all cases in tabular form for values n=5000 to 50000,step=5000");
    printf("\n9. Extract largest element");
    printf("\n10. Replace value at a node with new value");
    printf("\n11. Insert a new element");
    printf("\n12. Delete an element\n\n");
  
    do{ 
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
        case 0:
            exit(0);
            printf("\n");
            break;
        case 1:
            for(int i=0;i<n;i++) 
                a[i]=rand()%20;
            printf("Random numbers inserted into the array\n");
            break;
        case 2:
            printArray(a,n);
            break;
        case 3:
            heap_sort(a,n);
            printf("Sorted array in Ascending order using Max-heap Sort Technique: ");
            printArray(a,n);
            break;
        case 4:
            DescArray(a,n);
            printf("Sorted array in Descending order using any algorithm: ");
            printArray(a,n);
            break;
        case 5:
            for(int i=0;i<n;i++) a[i]=rand()%20;
            t=clock();
            heap_sort(a,n);
            t=clock()-t;
            printf("Time Complexity to sort ascending of random data: %f\n",((double)t)/CLOCKS_PER_SEC);
            break;
        case 6:
            AscArray(a,n);
            t=clock();
            heap_sort(a,n);
            t=clock()-t;
            printf("Time Complexity to sort ascending of data already in ascending order: %f\n",((double)t)/CLOCKS_PER_SEC);
            break;
        case 7:
            DescArray(a,n);
            t=clock();
            heap_sort(a,n);
            t=clock()-t;
            printf("Time Complexity to sort ascending of data already in descending order: %f\n",((double)t)/CLOCKS_PER_SEC);
            break;
        case 8:
            printf("\nTime Complexity Analysis:\n");
            printf("Value of n\tSorted Data\t\tReversely Sorted\tRandom Data\n");
            for(int i=5000;i<=50000;i=i+5000) {
                int a2[i];
                printf("%d\t\t",i);
                srand(time(0));
                for(int j=0;j<i;j++) 
                 a2[j]=j;
                time_sorted = clock();
                heap_sort(a2,i);
                time_sorted=clock()-t;
                printf("%f\t\t",((double)time_sorted)/CLOCKS_PER_SEC);
                DescArray(a2,i);
                time_reverse = clock();
                heap_sort(a2,n);
                time_sorted=clock()-t;
                printf("%f\t\t",((double)time_reverse)/CLOCKS_PER_SEC);
                for(int j=0;j<i;j++) 
                 a2[j]=rand()%(i)+1;
                time_random = clock();
                heap_sort(a2,i);
                time_random=clock()-t;
                printf("%f\t\t\n",((double)time_random)/CLOCKS_PER_SEC); 
              }
            break;
        case 9:heap_sort(a,n);printArray(a,n);
         max=get_max(a,n);printf("Max element %d\n",max);break;
         case 10:
         
            printf("Enter node");
            scanf("%d",&z);
            printf("Enter value");
            scanf("%d",&p);
            changepriority(a,n,z,p);
            break;
        case 11:
            //int k;
            printf("Element you want to insert:");
            scanf("%d",&k);
            n=n+1;
            a[n-1]=k;
             for(int i=(n/2)-1;i>=0;i--)
                heapify(a,n,i);
            shiftup(a,n-1);
          //  insert(a,n,k);
            break;
        case 12:
           // int r;
            printf("node you want to del:");
            scanf("%d",&r);
          //  remove(a,n,r);
            break;
         default: printf("\nInvalid input\n");
                 break;
        }
    } while(choice!=0);    
}
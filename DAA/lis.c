#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<math.h>
int LIS( int arr_517[], int n )  
{  
    int lis_517[n]; 
    lis_517[0] = 1;    
    for (int i = 1; i < n; i++ )  
    { 
        lis_517[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr_517[i] > arr_517[j])  
                lis_517[i] = fmax(lis_517[i], lis_517[j] + 1);  
    } 
    int res_517 = lis_517[0];
    for(int i=0;i<n;i++)
    {
        res_517 = fmax(lis_517[i], res_517);
    }
    return res_517;
}  
int main() {	
   int *arr_517=NULL;
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    arr_517=(int *)malloc(n*sizeof(int));
   /* for(i=0;i<n;i++)
    {
        arr_517[i]=rand()%100+1;
    }
    printf("Random array elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr_517[i]);
    }
    printf("\n");*/
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr_517[i]);
    }
    printf("Array elements are:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr_517[i]);
    }
printf("Longest increasing subsequence length= %d\n",LIS(arr_517, n));
}
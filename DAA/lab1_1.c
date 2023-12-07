#include <stdio.h>   
int main()  
{  
       int n,i,j;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elemnets\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
       int *arr=a;
    
    printf("Duplicate elements in given array: \n");  
    printf("Value->Index\n");
    //Searches for duplicate element  
    int key,t=-1;
    for(i=0;i<n;i++)
     {  
        for(j=i+1;j<n; j++)
         {  
            if(arr[i] == arr[j]&&arr[j]!=-1)  
             {  
                  key=arr[i];
                  arr[j]=-1;
                t=j;
        } 
    } 
        if(t!=-1)
           {
               printf("%d->%d\n",key,t);
           t=-1;key=0;
           }
    } 
 
    return 0;  
}  
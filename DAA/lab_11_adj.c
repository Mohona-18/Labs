#include<limits.h>
#include <stdio.h>
#define V 5
void initialise(int arr[V][V]) {
  int i, j;
  for (i = 0; i < V; i++)
    for (j = 0; j < V; j++)
      arr[i][j] = 0;
}

void insert(int arr[V][V], int i, int j,int k) {
  arr[i][j] = k;
  arr[j][i] = k;
}

void printMatrix(int arr[V][V]) {
  int i, j;

  for (i = 0; i < V; i++) {
    printf("%d:\t", i);
    for (j = 0; j < V; j++) {
      printf("%d\t", arr[i][j]);
    }
    printf("\n");
  }
}
void printmaxmin(int arr[V][V])
{       int sum[V],k=0;
    int max=INT_MIN,min=INT_MAX;
    int s=0,pos_max,pos_min;
    for(int i=0;i<V;i++)
    {
        s=0;
        for(int j=0;j<V;j++)
        {
            s+=arr[i][j];
         
        }
        sum[k++]=s;
        if(s>max)
       {    max=s;
            pos_max=i;
           
       }
        if(s<min)
        {
            min=s;
            pos_min=i;
            
        }
    }
    printf("Max:%d Max_position:%d\n",max,pos_max);
    printf("Min:%d Min_position:%d\n",min,pos_min);
    printf("Vertice\tSum\n");
    for(int i=0;i<V;i++)
    {
        printf("%d\t%d\n",i,sum[i]);
        
    } 
}

int main() {
  int a[V][V];

  initialise(a);
  printf("Enter no of edges\n");
  int n,v1,v2,wt;
  scanf("%d",&n);
  printf("Enter values in format :Vertice1 Vertice2 Weight\n");
  for(int i=0;i<n;i++)
  {
      scanf("%d",&v1);
       scanf("%d",&v2);
        scanf("%d",&wt);
      insert(a,v1,v2,wt);
  }
    printf("Matrix Display\n");
    printMatrix(a);

    printmaxmin(a);
    
  return 0;
}
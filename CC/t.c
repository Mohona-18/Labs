#include<stdio.h>
#define inf 9999
int arr[10][10],brr[10];
int main()
{
  int n,m,r,c,min,a,b,t;
  printf("Enter no of tasks and available machines: ");
  scanf("%d %d",&n,&m);
  //int arr[m][n], brr[n];
  t=n;
  for(int i=0;i<m;i++)
  {
    printf("For M%d\n",i+1);
    for(int j=0;j<n;j++)
    {
       printf("T%d: ",j+1);
       scanf("%d",&arr[i][j]); 
    }
    printf("\n");
  }
  
  while(t>0) {
  min=inf; 
  
  memset(brr,0,sizeof(brr));
  for(c=0;c<n;c++)
  {
    for(r=0;r<m;r++)
    {
      if(brr[c]<arr[r][c]) //max
         brr[c]=arr[r][c];
    }
    if(brr[c]<min)
    {
       min=brr[c];
       b=c;
    }
    
  }
  
  for(int i=0;i<m;i++)
  {
    if(arr[i][b]==min) {
    printf("T%d(%d) will be assigned to M%d\n",b+1,min,i+1);
    a=i;
    }
  }
  t--;

  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
       if(i==a)
       arr[i][j]+=min;
       if(j==b)
       arr[i][j]=inf;
        
    }
  }
  }
  return(0);
}
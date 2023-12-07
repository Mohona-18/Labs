#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
int a[2][4];
int main()
{
    printf("Max Min Algo\n");
    int n,m,i,j;
    printf("Enter the number of virtual Machines  and Number of Tasks: \n");
    scanf("%d %d",&m,&n);
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int min_task,min_m,c=0,max_m,max_task,min,max;
    bool f=false;
    while(c<n){
 min=INT_MAX,max=INT_MIN,f=false;
    for( i=0;i<n;i++)//3
    { 
    for( j=0;j<m;j++)//2
    {
        if(a[j][i]<min&&a[j][i]!=-1)
        {
            min=a[j][i];
            min_m=j;
            min_task=i;
            f=true;
        }
    }
     if(min>max &&f==true)
        {
         max=min;
           max_m= min_m;
            max_task=min_task;
        }
        min=INT_MAX;  
    }
    printf("Task %d allocated to Machine %d\n",max_task+1,max_m+1);
    printf("Table\n");
    for(i=0;i<m;i++)
    {   
        for(j=0;j<n;j++)
        {  
            printf("%d\t",a[i][j]);
             if(j==max_task)
            a[i][j]=-1;
        }
        printf("\n");
    }
     for( j=0;j<n;j++)
      {
            if(a[max_m][j]!=-1)
            a[max_m][j]+=max;
            }
    c++;
    }
}

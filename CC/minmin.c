#include<stdio.h>
#include<limits.h>
int a[10][10];
int main()
{
    printf("Min Min Algo\n");
    int n,m,i,j;
    printf("Enter the number of virtual Machines  and Number of Tasks: \n");
    scanf("%d %d",&m,&n);
    printf("Enter \n");
    for( i=0;i<m;i++){
        for( j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int min_task,min_m,c=0;
    while(c<n){
    int min=INT_MAX;
    for( i=0;i<m;i++)
    {
    for( j=0;j<n;j++)
    {
        if(a[i][j]<min&&a[i][j]!=-1)
        {
            min=a[i][j];
            min_m=i;
            min_task=j;
        }
    }
    }
    printf("Task %d allocated to Machine %d\n",min_task+1,min_m+1);
    printf("Table\n");
    for(i=0;i<m;i++)
    {   
        for(j=0;j<n;j++)
        {
           
            printf("%d\t",a[i][j]);
             if(j==min_task)
            a[i][j]=-1;

        }
        printf("\n");
    }
     for( j=0;j<n;j++)
      {
            if(a[min_m][j]!=-1)
            a[min_m][j]+=min;
            }
    c++;
    }
}

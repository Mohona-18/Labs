#include<stdio.h>
#include<limits.h>
#include<time.h>
#define MAX 7
int m[MAX][MAX],s[MAX][MAX];
int  mat_sol(int p[],int n)
{   int q=0;
    for(int i=1;i<n;i++)
    {
        m[i][i]=0;
    }
    for(int l=2;l<n;l++)
    {
        for(int i=1;i<n-l+1;i++)
        {
            int j=i+l-1;
            m[i][j]=INT_MAX;
            for(int k=i;k<=j-1;k++)
            {
                 q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                 if(q<m[i][j])
                 {
                    m[i][j]=q;
                     s[i][j]=k;
                 }
            }
        }
    }
    return(m[1][n-1]);
}

void main()
{
    printf("Enter no of matrix\n");
    int n;
    scanf("%d",&n);
    n=n+1;
    int p[n];
    printf("Enter the dimensions\n");
    for(int i=0;i<n;i++)
    scanf("%d",&p[i]);

    clock_t start;
    start=clock();
    int x=mat_sol(p,n);
    start=clock()-start;
    printf("Time: %f\n",(double)((start)/CLOCKS_PER_SEC));
    printf("Minimum cost: %d\n",x);
    /*printf("Matrix m\n");
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
      printf("Matrix s\n");
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }*/
    printf("\nOptimal Cost:\t\t\t Split At\n");
    for(int i = 0;i<n;i++)
     {
     for(int j = 0;j<n;j++)
        {
         if((i==1&&j==5)||(i==2&&j==4)||(i==1&&j==3))
            printf("m[%d][%d] = %d \t\t s[%d][%d] = %d \n",i,j,m[i][j],i,j,s[i][j]);
        }
    }
 
    /* printf("\nSplit at\n");
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
             {
               if((i==1&&j==5)||(i==2&&j==4)||(i==1&&j==3))
                 printf("s[%d][%d] = %d\n",i,j,s[i][j]);
              }
         }*/


}


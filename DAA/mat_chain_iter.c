#include<stdio.h>
#include<limits.h>
#define MAX 10
 int m[MAX][MAX],s[MAX][MAX];
int MatrixChainMultiplication(int p[], int n)
{
   
    int i, j, k, L, q;
 
    for (i=1; i<n; i++)
        m[i][i] = 0;    
    for (L=2; L<n; L++)
    {
        for (i=1; i<n-L+1; i++)
        {
            j = i+L-1;
            m[i][j] = INT_MAX; 
 
            for (k=i; k<=j-1; k++)
            {
                q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q; 
                    s[i][j]   =k;
                }
            }
        }
    }
    
    return m[1][n-1];   
 
}
 
int main()
{
    int n,i;
    printf("Enter number of matrices\n");
    scanf("%d",&n);
    n++;
    int arr[n];
    printf("Enter dimensions \n");
    for(i=0;i<n;i++)
    {
        printf("Enter d%d :: ",i);
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Minimum number of multiplications is %d\n", MatrixChainMultiplication(arr, size));
    printf("Matrix M:\n");
     for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            printf("%d\t\t",m[i][j]);
        }
        printf("\n");
    }
    printf("Matrix S:\n");
     for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            printf("%d\t\t",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}
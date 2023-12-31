/* A naive recursive implementation that simply
follows the above optimal substructure property */
#include <limits.h>
#include <stdio.h>
#include<time.h>
// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n
int MatrixChainOrder(int p[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int min = INT_MAX;
	int count;

	// place parenthesis at different places between first
	// and last matrix, recursively calculate count of
	// multiplications for each parenthesis placement and
	// return the minimum count
	for (k = i; k < j; k++)
	{
		count = MatrixChainOrder(p, i, k)
				+ MatrixChainOrder(p, k + 1, j)
				+ p[i - 1] * p[k] * p[j];

		if (count < min)
			min = count;
	}

	// Return minimum count
	return min;
}

// Driver code
int main()
{   int n=5;
	int arr[n] ;
    //= { 10,20,30,40,30 };
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
	 n = sizeof(arr) / sizeof(arr[0]);
    float start;
    start=clock();
	printf("Minimum number of multiplications is %d ",
		MatrixChainOrder(arr, 1, n - 1));
        start=clock()-start;
        printf("%f\n",(double)(start)/CLOCKS_PER_SEC);
	return 0;
}

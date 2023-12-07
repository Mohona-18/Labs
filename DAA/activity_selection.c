#include<stdio.h>
void printMaxActivities(int s[], int f[], int n)
{
  int i, j;
    printf ("Following activities are selected \n");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}
int main()
{
	int x,i;
	printf("Enter the total activities\n");
	scanf("%d",&x);
	int s[x],f[x];
	printf("Enter the starting time\n");
	for(i=0;i<x;i++)
	scanf("%d",&s[i]);
	printf("Enter the finishing time\n");
	for(i=0;i<x;i++)
	scanf("%d",&f[i]);
int n = sizeof(s)/sizeof(s[0]);
printMaxActivities(s, f, n);
return 0;
}


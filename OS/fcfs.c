#include<stdio.h>
int main()
{
   	int i,j,n;
	int bt[6],wt[6],tat[6];
	float avgwt=0,avgtat=0;
    printf("Enter total number of processes: ");
    scanf("%d",&n);
    printf("\nEnter Burst Time");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]: ",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;   
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avgwt=avgwt+wt[i];
        avgtat=avgtat+tat[i];
        printf("\nP[%d]\t\t  %d\t\t  %d\t\t  %d",i+1,bt[i],wt[i],tat[i]);
    }
    avgwt=avgwt/i;
    avgtat=avgtat/i;
    printf("\nAverage Waiting Time: %.1f ",avgwt);
    printf("\nAverage Turnaround Time: %.1f ",avgtat);
    return 0;
}

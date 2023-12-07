#include<stdio.h>
int main()
{
   	int i,j,n,t;
	int bt[6],wt[6],tat[6],p[6];
	float avgwt=0,avgtat=0;
    printf("Enter total number of processes: ");
    scanf("%d",&n);
    printf("\nEnter Burst Time");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]: ",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;
    }
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n-1-i;j++)
    	{
    		if(bt[j]>bt[j+1])
    		{
    			t=bt[j];
    			bt[j]=bt[j+1];
    			bt[j+1]=t;
    			t=p[j];
    			p[j]=p[j+1];
    			p[j+1]=t;
			}
		}
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
        printf("\nP[%d]\t\t  %d\t\t  %d\t\t  %d",p[i],bt[i],wt[i],tat[i]);
    }
    avgwt=avgwt/i;
    avgtat=avgtat/i;
    printf("\nAverage Waiting Time: %.1f ",avgwt);
    printf("\nAverage Turnaround Time: %.1f ",avgtat);
    return 0;
}

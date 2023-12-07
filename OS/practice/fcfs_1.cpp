#include<iostream>
using namespace std;
int main()
{
    int n,i,time=0;
    float sum=0,avg;
    cout<<"enter the number of processes: ";
    cin>>n;
    int at[n],bt[n],ct[n],tat[n],wt[n];
    cout<<"enter the arrival times for-\n";
    for(i=0;i<n;i++)
    {
        cout<<"P"<<i+1<<": ";
        cin>>at[i];
    }
    cout<<"enter the burst times for-\n";
    for(i=0;i<n;i++)
    {
        cout<<"P"<<i+1<<": ";
        cin>>bt[i];
    }
    for(i=0;i<n;i++)
    {
        ct[i]=time+bt[i];
        time+=bt[i];
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        sum+=wt[i];
    }
    avg=sum/n;
    cout<<"the average waiting time is: "<<avg;
}
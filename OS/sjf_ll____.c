#include<stdio.h>
#include<stdlib.h>
struct process
{
int pid,at,bt,ct,wt,tat;
struct process *next;
}*current;
void insert(int p,int a,int b)
{
struct process *New=(struct process*)malloc(sizeof(struct process));
struct process *temp=current;
New->pid=p;
New->at=a;
New->bt=b;
New->next=NULL;
if(current==NULL)
{
current=New;
}
else
{
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=New;
}
}
void calculate()
{
struct process *temp=current;
struct process *t,*soonest;
int tp,ta,tb,n=0;
float awt=0,atat=0;
int time=0;
while(temp!=NULL)
{
t=temp;
soonest=temp;
while(t!=NULL)
{
if((t->at)<(soonest->at))
{
soonest=t;
}
else if((t->at)==(soonest->at))
{
if((t->bt)<(soonest->bt))
{
soonest=t;
}
}
t=t->next;
}
tp=temp->pid;
ta=temp->at;
tb=temp->bt;temp->pid=soonest->pid;
temp->at=soonest->at;
temp->bt=soonest->bt;
soonest->pid=tp;
soonest->at=ta;
soonest->bt=tb;
temp=temp->next;
}
printf("PID\tAT\tBT\tCT\tTAT\tWT\n");
while(current!=NULL)
{
if(current->at <= time)
{
time+=current->bt;
current->ct=time;
current->tat=(current->ct) - (current->at);
current->wt=(current->tat) - (current->bt);
awt += current->wt;
atat += current->tat;
n++;
printf("%d\t%d\t%d\t%d\t%d\t%d\n",current->pid,current->at,current->bt,current->ct,current->tat,current->wt);
temp=current;
current=current->next;
free(temp);
}
else
{
time++;
}
}awt /= n;
atat /= n;
printf("Avg. Waiting Time=%.2f\nAvg. TurnaroundTime=%.2f\n",awt,atat);
}
int main()
{
int n,i,p,a,b;
printf("Enter the no of process: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter PID : ");
scanf("%d",&p);
printf("\nEnter Arrival Time : ");
scanf("%d",&a);
printf("Enter Burst Time : ");
scanf("%d",&b);
printf("\n");
insert(p,a,b);
}
printf("Starting SJF schedule :\n");
calculate();
return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct process
{
int pid,at,bt,priority,ct,wt,tat;
struct process *next;
}*current;
void insert(int p,int a,int b,int pr)
{
struct process *New=(struct process*)malloc(sizeof(struct process));
struct process *temp=current;
New->pid=p;
New->at=a;
New->bt=b;
New->priority=pr;
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
void sort_at()
{
struct process *temp=current;
struct process *t,*highest,*soonest;
int tp,ta,tb,tpr;
while(temp!=NULL)
{
t=temp;
highest=temp;
while(t!=NULL)
{
if((t->at)<(highest->at))
{
highest=t;
}
t=t->next;
}
tp=temp->pid;
ta=temp->at;
tb=temp->bt;
tpr=temp->priority;
temp->pid=highest->pid;
temp->at=highest->at;
temp->bt=highest->bt;
temp->priority=highest->priority;
highest->pid=tp;
highest->at=ta;highest->bt=tb;
highest->priority=tpr;
temp=temp->next;
}
}
void sort_priority(int time)
{
struct process *temp=current;
struct process *t,*highest,*soonest;
int tp,ta,tb,tpr;
while(temp!=NULL)
{
t=temp;
highest=temp;
while(t!=NULL)
{
if((t->priority)>(highest->priority)&&(t->at <= time))
{
highest=t;
}
t=t->next;
}
tp=temp->pid;
ta=temp->at;
tb=temp->bt;
tpr=temp->priority;
temp->pid=highest->pid;
temp->at=highest->at;
temp->bt=highest->bt;
temp->priority=highest->priority;
highest->pid=tp;
highest->at=ta;
highest->bt=tb;
highest->priority=tpr;temp=temp->next;
}
}
void calculate()
{
struct process *temp=current;
int n=0;
float awt=0,atat=0;
int time=0;
sort_at();
printf("PID\tAT\tBT\tPriority\tCT\tTAT\tWT\n");
while(current!=NULL)
{
sort_priority(time);
if(current->at <= time)
{
time+=current->bt;
current->ct=time;
current->tat=(current->ct) - (current->at);
current->wt=(current->tat) - (current->bt);
awt += current->wt;
atat += current->tat;
n++;
printf("%d\t%d\t%d\t%d\t\t%d\t%d\t%d\n",current->pid,current->at,current->bt,current->priority,current->ct,current->tat,current->wt);
temp=current;
current=current->next;
free(temp);
}
else
{time++;
}
}
atat /= n;
awt /= n;
printf("Avg. Waiting Time = %.2f\nAvg. Turnaround Time =%.2f\n",awt,atat);
}
int main()
{
int n,p,a,b,pr,i;
printf("Enter the no of process : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("Enter PID : ");
scanf("%d",&p);
printf("\nEnter Arrival Time : ");
scanf("%d",&a);
printf("Enter Burst Time : ");
scanf("%d",&b);
printf("Enter Priority : ");
scanf("%d",&pr);
printf("\n");
insert(p,a,b,pr);
}
printf("Starting Scheduling :\n");
calculate();
return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct process
{
int pid,at,bt,priority,rem,ct,wt,rt,tat;
struct process *next;
}*current;
void insert(int p,int a,int b,int pr)
{
struct process *New=(struct process*)malloc(sizeof(struct process));
struct process *temp=current;
New->pid=p;
New->at=a;
New->bt=b;
New->rem=b;
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
void sort_arr()
{
struct process *temp=current;
struct process *t,*soonest;
int tp,ta,tb,trem,tr;
while(temp!=NULL)
{
t=temp;
soonest=temp;
while(t!=NULL)
{
if(t->at < soonest->at)
{
soonest=t;
}
t=t->next;
}
tp=temp->pid;
ta=temp->at;
tb=temp->bt;
tr=temp->rt;
trem=temp->rem;
temp->pid=soonest->pid;
temp->at=soonest->at;
temp->bt=soonest->bt;
temp->rt=soonest->rt;
temp->rem=soonest->rem;soonest->pid=tp;
soonest->at=ta;
soonest->bt=tb;
soonest->rt=tr;
soonest->rem=trem;
temp=temp->next;
}
}
void sort_pr(int time)
{
struct process *temp=current;
struct process *t,*highest;
int tp,ta,tb,trem,tpr,tr;
while(temp!=NULL)
{
t=temp;
highest=temp;
while(t!=NULL)
{
if(((t->priority)>(highest->priority)) && ((t->at) <= time))
{
highest=t;
}
t=t->next;
}
tp=temp->pid;
ta=temp->at;
tb=temp->bt;
tr=temp->rt;
tpr=temp->priority;
trem=temp->rem;
temp->pid=highest->pid;
temp->at=highest->at;
temp->bt=highest->bt;temp->rt=highest->rt;
temp->rem=highest->rem;
temp->priority=highest->priority;
highest->pid=tp;
highest->at=ta;
highest->bt=tb;
highest->rt=tr;
highest->rem=trem;
highest->priority=tpr;
temp=temp->next;
}
}
void calculate()
{
struct process *temp;
int time=0,n=0;
float awt=0,atat=0;
printf("PID\tAT\tBT\tPriority\tCT\tTAT\tWT\tRT\n");
sort_arr();
while(current!=NULL)
{
sort_pr(time);
time++;
if(current->at <= time)
{
if(current->rem == current->bt)
{
current->rt= time - (current->at) - 1;
}
current->rem=current->rem - 1;
if(current->rem == 0)
{
current->ct=time;current->tat=(current->ct)-(current->at);
current->wt=(current->tat)-(current->bt);
awt += current->wt;
atat += current->tat;
n++;
printf("%d\t%d\t%d\t%d\t\t%d\t%d\t%d\t%d\n",current->pid,current->at,current->bt,current->priority,current->ct,current->tat,current->wt,current->rt);
temp=current;
current=current->next;
free(temp);
}
}
else
{
time++;
}
}
awt /= n;
atat /= n;
printf("Avg. Waiting Time=%.2f\nAvg. TurnaroundTime=%.2f\n",awt,atat);
}
int main()
{
int n,i,p,a,b,pr;
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
printf("Enter priority : ");
scanf("%d",&pr);
printf("\n");
insert(p,a,b,pr);
}
printf("Starting scheduling :\n");
calculate();
return 0;
}

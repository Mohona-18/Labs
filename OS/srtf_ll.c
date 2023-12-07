#include<stdio.h>
#include<stdlib.h>
struct process
{
int pid,at,bt,rem,ct,wt,rt,tat;
struct process *next;
}*current;
void insert(int p,int a,int b)
{
struct process *New=(struct process*)malloc(sizeof(struct process));
struct process *temp=current;
New->pid=p;
New->at=a;
New->bt=b;
New->rem=b;
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
temp->rem=soonest->rem;
soonest->pid=tp;
soonest->at=ta;soonest->bt=tb;
soonest->rt=tr;
soonest->rem=trem;
temp=temp->next;
}
}
void sort_rem(int time)
{
struct process *temp=current;
struct process *t,*shortest;
int tp,ta,tb,trem,tr;
while(temp!=NULL)
{
t=temp;
shortest=temp;
while(t!=NULL)
{
if(((t->rem)<(shortest->rem)) && ((t->at) <= time))
{
shortest=t;
}
t=t->next;
}
tp=temp->pid;
ta=temp->at;
tb=temp->bt;
tr=temp->rt;
trem=temp->rem;
temp->pid=shortest->pid;
temp->at=shortest->at;
temp->bt=shortest->bt;
temp->rt=shortest->rt;
temp->rem=shortest->rem;
shortest->pid=tp;shortest->at=ta;
shortest->bt=tb;
shortest->rt=tr;
shortest->rem=trem;
temp=temp->next;
}
}
void calculate()
{
struct process *temp;
int time=0,n=0;
float awt=0,atat=0;
printf("PID\tAT\tBT\tCT\tTAT\tWT\tRT\n");
sort_arr();
while(current!=NULL)
{
sort_rem(time);
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
current->ct=time;
current->tat=(current->ct)-(current->at);
current->wt=(current->tat)-(current->bt);
awt += current->wt;
atat += current->tat;n++;
printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n",current->pid,current->at,current->bt,current->ct,current->tat,current->wt,current->rt);
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
int n,i,p,a,b;
printf("Enter the process : ");
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
printf("Starting SRTF schedule :\n");
calculate();
return 0;
}

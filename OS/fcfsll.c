#include<stdio.h> 
#include<stdlib.h> 
 
typedef struct process 
{ 
	int pn; 
	float at,bt,ct,tat,wt; 
	struct process *next; 
}process; 
float total_wait_time=0,total_turn_around_time=0; 
int n; 
 
process *get_process(float a,float b)
{ 
	static int i=1; 
	process *pr=(process *)malloc(sizeof(process)); 
	pr->at=a;
	pr->bt=b; 
	pr->pn=i++; 
	pr->next=NULL; 
	return pr; 
} 
 
void insert(process *ptr,float a,float b) 
{ 
	process *pro,*temp; 
	pro=get_process(a,b); 
	while(ptr->next!=NULL) 
	{ 
		temp=ptr; 
		ptr=ptr->next; 
		if(ptr->at>a)
		{ 
			pro->next=ptr; 
			temp->next=pro; 
			return; 
		} 
	} 
	ptr->next=pro; 
} 
 
void display(process *ptr) 
{ 
	process *temp=ptr->next; 
	printf("Process\tArrival time\tBurst time\tWaiting time\tTurn arround time\n"); 
	while(temp!=NULL) 
	{ 
		printf("P[%d]\t%3.2f\t\t%3.2f\t\t%3.2f\t\t%3.2f\n",temp->pn,temp->at,temp->bt,temp->wt,temp->tat); 
		temp=temp->next; 
	} 
	printf("Average waiting time :%3.2f\nAverage turn arround time :%3.2f\n",total_wait_time/n,total_turn_around_time/n); 
} 
 
void ganttchart(process *ptr) 
{ 
	process *temp,*t; 
	temp=ptr->next; 
	t=ptr; 
	while(temp!=NULL) 
	{ 
		temp->ct=t->ct+temp->bt; 
		t=temp; 
		temp=temp->next; 
	} 
} 
 
void wt_and_tat(process *ptr) 
{ 
process *temp=ptr->next; 
	while(temp!=NULL) 
	{ 
		temp->tat=temp->ct-temp->at; 
		total_turn_around_time+=temp->tat; 
		temp->wt=temp->tat-temp->bt; 
		total_wait_time+=temp->wt; 
		temp=temp->next; 
	} 
} 
 
 
int main() 
{ 
	int i; 
	float a,b; 
	process *START=(process *)malloc(sizeof(process)); 
	START->next=NULL; 
	printf("=========FCFS Algo==========\nEnter the no. of process : "); 
	scanf("%d",&n); 
	for(i=0;i<n;i++) 
	{ 
		printf("Process P(%d) \n",i+1); 
		printf("Arival time = "); 
		scanf("%f",&a); 
		printf("Burst time =  "); 
		scanf("%f",&b); 
		insert(START,a,b); 
		printf("\n"); 
	} 
 
	ganttchart(START); 
	wt_and_tat(START); 
	display(START); 
	return 0; 
}

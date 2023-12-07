#include <stdio.h>
#include <stdlib.h>
struct node
{
    int PId,art,bst,ct,wtt,tat,st,remt;
    struct node *next;
    struct node *prev;
};
struct node *start;
int ctl=0,awt=0,atat=0,n;
struct node *current;
void insert()
{
    struct node *node1=(struct node *)malloc(sizeof(struct node));
    printf("\nENTER Process Id:");
    scanf("%d",&(node1->PId));
    printf("ENTER Arrival Time:");
    scanf("%d",&(node1->art));
    printf("ENTER Burst Time:");
    scanf("%d",&(node1->bst));
    node1->ct=-1;
    node1->wtt=-1;
    node1->tat=-1;
    node1->st=-1;
    node1->remt=node1->bst;
    node1->next=NULL;
    if(start==NULL){
        start=node1;
        current=node1;
        node1->prev==NULL;
    }
    else
    {
        node1->prev=current;
        current->next=node1;
        current=node1;
    }      
}
void calculate()
{
    printf("\nPId\tART\tBST\tWTT\tTAT");
    struct node *index=start;
    float sumWt = 0.0;
    float sumTAT = 0.0;
    int n = 0;    
    while(index!=NULL)
    {
        sumWt += index->wtt;
        sumTAT += index->tat;
        n++;

         printf("\n%d\t%d\t%d\t%d\t%d",index->PId,index->art,index->bst,index->wtt,index->tat);
         index=index->next;   
    }
        sumWt /= n;
        sumTAT /=n;

         printf("\n\nAVG Waiting time= %f",sumWt);
         printf("\n\nAVG TAT= %f\n",sumTAT);
}
void sort(int n,int q)
{
     int comp=0,currt=0;
     while(comp<n)
    {
        struct node *index=start;
        while(index!=NULL)
        {
            if(index->remt==0){
                index=index->next;
                continue;
            }
            if(index->bst==index->remt)
                index->st=currt;
            if(index->remt<q)
			{
                currt=currt+index->remt;
                index->remt=0;
            }
            else
            {
                currt+=q;
                index->remt-=q;
            }
            if(index->remt==0)
            {
                comp++;
                index->ct=currt;
                index->tat=index->ct-index->art;
                index->wtt=index->tat-index->bst;
            }
            index=index->next;
        }
    }
}

int main()
{
    int n,i;
    printf("Enter number of processes:");
    scanf("%d",&n);
    int q;
    printf("Enter quantum:");
    scanf("%d",&q);
    for(i=0;i<n;i++)
    {
        insert();
    }
    sort(n,q);
    calculate();
    return 0;

}

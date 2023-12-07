#include<stdio.h>
#define MAX 10000
int a[MAX];
int n;
void swap(int *x,int *y)
{
    int t=*x;*x=*y;*y=t;
}
int parent(int i)
{
    return ((i-1)/2);
}
int left_c(int i)
{
    return (2*i+1);
}
int right_c(int i)
{
    return(2*1+2);
}
void shiftup(int i)
{
    while(i>0&&a[parent(i)]<a[i])
    {
        swap(&a[parent(i)],&a[i]);
        i=parent(i);
    }
}
void shiftdown(int i,int p)
{
    int l=i,lc=left_c(i),rc=right_c(i);
    if(lc<p&&a[lc]>a[l]) l=lc;
    if(rc<p&&a[rc]>a[l])l=rc;
    if(i!=l)
    {
        swap(&a[i],&a[l]);
        shiftdown(l,p);
    }
}
int getMax()
{
    return a[0];
}
void insert(int  key)
{
    n=n+1;
    a[n-1]=key;
    shiftup(n-1);
}
int extractMax()
{
     int q;
    if((q=queue_empty())==0)
    {
        printf("Queue Empty\n");return;
    }
    int result=a[0];
    a[0]=a[n-1];
    n=n-1;
    shiftdown(0,n);
    return result;
}
void changepriority(int i, int p)
{
     int q;
    if((q=queue_empty())==0)
    {
        printf("Queue Empty\n");return;
    }
    int oldp = a[i];
    a[i] = p;
 
    if (p > oldp) {
        shiftup(i);
    }
    else {
        shiftdown(i,n);
    }
}
 void remove_(int i)
{   int q;
    if((q=queue_empty())==0)
    {
        printf("Queue Empty\n");return;
    }
    a[i] = getMax() + 1;
    shiftup(i);
    extractMax();
}
void print_()
{
     int q;
    if((q=queue_empty())==0)
    {
        printf("Queue Empty\n");return;
    }
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
}
/*void heap_sort()
{
    for(int i=(n/2)-1;i>=0;i--)
    shiftdown(i,n);
    for(int i=n-1;i>0;i--)
    {
        swap(&a[0],&a[i]);
        shiftdown(0,i);
    }
}*/
int queue_empty()
{
    if(n==0) return 0;
    return 1;
}
int main()
{   int x,y,s,i,p,r,w,j,o,l;
    do{
    printf("1.Parent\n2.Left Child\n3.Right Child\n4.Insert(Enqueue)\n5.Delete(Dequeue)\n6.Change Priority\n7.Extract Max\n8.Print Queue\n9.Check Empty or not\nEnter Choice\n");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {   case 1:
        printf("Enter index\n");
        scanf("%d",&j);
        if(parent(j)>0&&n>0)
        printf("Parent of %d is %d\n",j,parent(j));
        else
        printf("Root\n");
        break;
        case 2:
        printf("Enter index\n");
        scanf("%d",&o);
        if(left_c(0)<n)
        printf("Left Child of %d is %d\n",o,left_c(o));
        else printf("No left child\n");
        break;
        case 3:
        printf("Enter index\n");
        scanf("%d",&w);
        if(right_c(0)<n)
        printf("Right Child of %d is %d\n",w,right_c(w));
        else printf("No right child\n");
        break;
        case 4:
        printf("Enter element\n");
        scanf("%d",&x);
        insert(x);
        printf("%d",n);
        break;
        case 5:
        printf("Enter index\n");
        scanf("%d",&y);
        remove_(y);
        break;
        case 6:
        printf("Enter index and value\n");
        scanf("%d",&i);
        scanf("%d",&p);
        changepriority(i,p);
        break;
        case 7:
         r=extractMax();
        printf("Max ie extracted:%d\n",r);
        break;
        case 8:
        print_();
        break;
        case 9:
        l=queue_empty();
        if(l==0)
        printf("Empty Queue\n");
        else
        printf("Not Empty\n");
    }
    printf("Wish to continue 0/1 :");
    scanf("%d",&s);
    }while(s!=0);
}

 


#include<stdio.h>
#include<time.h>
void TowerofHonoi(int n,char A,char B,char C)
{
if(n==0) //base condition
return;
TowerofHonoi(n-1,A,C,B );
printf("%c ->%c\n",A,C);
TowerofHonoi(n-1,B,A,C);
}
int main()
{clock_t s,e;
    printf("Enter no of disks\n");
int n;
scanf("%d",&n);
s=clock();
//A-Begin,B-Auxillary,C-End
printf("Moving disk from\tto\n");
TowerofHonoi(n,'A','B','C');
e=clock();
 double t=((double)(difftime(e,s)))/CLOCKS_PER_SEC; 
 printf("Time taken:%f",t);
return 0;
}
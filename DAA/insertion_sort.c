#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int *a;
int n;
void insertion_a(int *a, int n){
int t,j;
    for(int i=1;i<n;i++)
        { 
           t=a[i];
           j=i-1;
           while(j>=0&&t<a[j])
          { a[j+1]=a[j];
           j--;}
           a[j+1]=t;
        }
}
void insertion_d(int *a, int n){
int t,j;
    for(int i=1;i<n;i++)
        { 
           t=a[i];
           j=i-1;
           while(j>=0&&t>a[j])
          { a[j+1]=a[j];
           j--;}
           a[j+1]=t;
        }
}
void reverse(int*a , int n)
{int t;
    for(int i=0;i<n/2;i++)
{
t=*(a+i);
*(a+i)=*(a-i+n-1);
*(a-i+n-1)=t;
}
}
int main()
{   int i,ch; clock_t t;
 a=(int*)malloc(100000000*sizeof(int));
printf("1.Insertion is ascending\n2.Insertion in descending\n3.Insertion sort of already sorted arry(a-a)\n");
printf("4.Insertion sort of already sorted arry(a-d)\n5.Insertion sort of already sorted arry(d-a)\n6.Insertion sort of already sorted arry(d-d)\n7.Table\n");
   printf("Enter choice\n");
   scanf("%d",&ch);
   switch (ch){
       case 1:   n=5000;
                   for(i=0;i<n;i++)
                    a[i]=rand()%1000;
                 t=clock();
                 insertion_a(a,n);
                  t=clock()-t;
                printf("Insertion sort execution time for on random data  Asc\t%f\n",((double)t)/CLOCKS_PER_SEC);
                break;
         case 2:   n=5000;
                   for(i=0;i<n;i++)
                    a[i]=rand()%1000;
                 t=clock();
                 insertion_d(a,n);
                  t=clock()-t;
                printf("Insertion sort execution time for on random data  Dsc\t%f\n",((double)t)/CLOCKS_PER_SEC);
                break;

        case 3:   n=5000;
                   for(i=0;i<n;i++)
                    a[i]=rand()%1000;
                     insertion_a(a,n);
                 t=clock();
                 insertion_a(a,n);
                  t=clock()-t;
                printf("Insertion sort execution time for on Asc data in Asc\t%f\n",((double)t)/CLOCKS_PER_SEC);
                break;
          case 4:   n=5000;
                   for(i=0;i<n;i++)
                    a[i]=rand()%1000;
                     insertion_a(a,n);
                 t=clock();
                 insertion_d(a,n);
                  t=clock()-t;
                printf("Insertion sort execution time for on Asc data in Dsc\t%f\n",((double)t)/CLOCKS_PER_SEC);
                break;
          case 6:   n=5000;
                   for(i=0;i<n;i++)
                    a[i]=rand()%1000;
                     insertion_d(a,n);
                 t=clock();
                 insertion_d(a,n);
                  t=clock()-t;
                printf("Insertion sort execution time for on Dsc data in Dsc\t%f\n",((double)t)/CLOCKS_PER_SEC);
                break;
         case 5:   n=5000;
                   for(i=0;i<n;i++)
                    a[i]=rand()%1000;
                     insertion_d(a,n);
                 t=clock();
                 insertion_a(a,n);
                  t=clock()-t;
                printf("Insertion sort execution time for on Dsc data in Asc\t%f\n",((double)t)/CLOCKS_PER_SEC);
                break;
        
    
   }
    //clock_t i_a,i_d;
      n=5000;
   /*while(n<=50000){
  
    for(i=0;i<n;i++)
    a[i]=rand()%1000;
    i_a=clock();
    insertion_a(a,n);
    i_d=clock()-i_a;
 //   reverse(a,n);
     i_d=clock();
    insertion_d(a,n);
    i_d=clock()-i_d;
    printf("%d\t\t\t\t%f\t\t\t\t%f\n",n,((double)i_a)/CLOCKS_PER_SEC,((double)i_d)/CLOCKS_PER_SEC);
     n+=5000;
    }*/
 
  /*  clock_t s;
    s=clock();
    insertion_a(a,n);
    s=clock()-s;
    printf("%f\n",((double)s)/CLOCKS_PER_SEC);*/
//close(a);
return 0;
}


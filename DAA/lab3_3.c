#include<stdio.h>
#include <time.h>
int fibo(int);
//0 is the 0th element 
void main()
{
    int n;
    printf("Enter the no.\t");
    scanf("%d",&n);

  //clock_t t;
  //  t = clock();
    int  r=fibo(n);
    //t = clock() - t;
    //double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
    //printf("fun() took %f seconds to execute \n", time_taken);
    printf("%d",r);
}
int fibo(int x){
if(x==0)
return 0;
else if(x==1)
return 1;
else if( x>=2)
return(fibo(x-1)+fibo(x-2));
}
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int gcd2(int,int);
int gcd1(int,int);
void main()
{
    printf("Enter a and b\n");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int g1=gcd1(a,b);
    printf("A-> %d is the gcd of %d and %d\n",g1,a,b);
        int g2=gcd2(a,b);
    printf("B-> %d is the gcd of %d and %d\n",g2,a,b);

}
int gcd1(int a,int b)
{   int g=0,c=a>b?b:a;
    for(int i=1;i<=c;i++)
    {
        if(a%i==0 &&b%i==0)
        g=i;
    }
    return g;
}
int gcd2(int a,int b)
{
    int c=a>b?b:a;
    bool p[c+1];
    for(int i=0;i<c+1;i++)
    p[i]=true;

     for (int i = 2; i*i <c+1; i++)
    {
      
        if (p[i] == true)
        {
            for (int j = i*i; j <= c; j += i)
                p[j] = false;
        }
    }
    
    int g=1;
    for(int i=2;i<=c;i++)
    {
        if(p[i]==true && a%i==0 && b%i==0)
        {
            g*=i;
            a/=i;
            b/=i;
            i--;
        }

    }
 
    
    return g;
}
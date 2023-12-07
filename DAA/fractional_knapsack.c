# include<stdio.h>
void f_knapsack(int n,int obj[], float wt[], float p[], float cap)
 {
   float x[20], tp = 0;
   int i, j, u;
   u = cap;
   for (i = 0; i < n; i++)
      x[i] = 0.0;
    printf("\nFraction of object considered:-");
   for (i = 0; i < n; i++)
    {
      if (wt[i] > u)
         break;
      else 
        {       printf("%d\t",(int)obj[i]);
                x[i] = 1.0;
                tp = tp+p[i];
                u = u-wt[i];
         }
     }
   if (i < n && u!=0)
    {
      printf("%d\t\n",(int)obj[i]);
      x[i] =u/wt[i];
    }
   tp = tp + (x[i] * p[i]);
   printf("\nPercentage of object considered :- ");
   for (i = 0; i < n; i++)
     {  if(x[i]!=0)
          printf("%f\t",x[i]);}
   printf("\nMaximum profit is:- %f", tp);
}
void swap(float *x,float *y)
{
    float temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
 {
   float wt[20], p[20], capacity;
   int object_id[20];
   int num, i, j;
   float ratio[20], temp;
   printf("\nEnter the no. of objects:- ");
   scanf("%d", &num);
   for (i = 0; i < num; i++) 
    {      object_id[i]=i+1;
             printf("\nEnter the wts and profits of object %d:-",object_id[i]);
        scanf("%f %f", &wt[i], &p[i]);
    }
   printf("\nEnter the capacity of knapsack:- ");
   scanf("%f", &capacity);
   for (i = 0; i < num; i++)
      ratio[i] = p[i]/wt[i];
   for (i = 0; i < num; i++)
    {
      for (j = i + 1; j < num; j++)
     {
         if (ratio[i] < ratio[j])
        {   swap(&ratio[i],&ratio[j]);
            swap(&wt[i],&wt[j]);
            swap(&p[i],&p[j]);
            swap((float*)&object_id[i],(float*)&object_id[j]);
         }
      }
   }
   f_knapsack(num,object_id,wt,p,capacity);
   return(0);
}


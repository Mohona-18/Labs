# include<stdio.h>
# define max 20
void f_knapsack(int n, float wt[], float p[], float cap)
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
        {      // printf("%d\t",(int)obj[i]);
                x[i] = 1.0;
                tp = tp+p[i];
                u = u-wt[i];
         }
     }
   if (i < n && u!=0)
    {
      //printf("%d\t\n",(int)obj[i]);
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
 void merging(float r[],float p[],float wt[],int low, int mid, int high)
  {
 int l1, l2, i;float t1[max] ,t2[max],t3[max];
 for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) 
 {
    if(r[l1] <= r[l2])
   { t1[i] = r[l1++];
        t2[i]=p[l1++];
        t3[i]=wt[l1++];
        }
    else
    {
        t1[i] = r[l2++];
        t2[i]=p[l2++];
        t3[i]=wt[l2++];
    }
}
    while(l1 <= mid)
  {
      t1[i++] = r[l1++];
        t2[i++]=p[l1++];
        t3[i++]=wt[l1++];
  }
 
    while(l2 <= high)
  { t1[i++] = r[l2++];
        t2[i++]=p[l2++];
        t3[i++]=wt[l2++];
  }
    for(i = low; i <= high; i++)
    {
         r[i]=t1[i];
       p[i]=t2[i];
        wt[i]=t3[i];
    }
 }

 void sort(float r[],float p[],float wt[],int low, int high) 
 {
    int mid;
    if(low < high) {
    mid = (low + high) / 2;
    sort(r,p,wt,low, mid);
    sort(r,p,wt,mid+1, high);
        merging(r,p,wt,low, mid, high);
    } 
    else 
 return;
 }
int main()
 {
   float wt[20], p[20], capacity;
   //int object_id[20];
   int num, i, j;
   float ratio[20], temp;
   printf("\nEnter the no. of objects:- ");
   scanf("%d", &num);
   for (i = 0; i < num; i++) 
    {      //object_id[i]=i+1;
        //     printf("\nEnter the wts and profits of object %d:-",object_id[i]);
         printf("\nEnter the wts and profits of object %d:-",i+1);
        scanf("%f %f", &wt[i], &p[i]);
    }
   printf("\nEnter the capacity of knapsack:- ");
   scanf("%f", &capacity);
   for (i = 0; i < num; i++)
      ratio[i] = p[i]/wt[i];
  /* for (i = 0; i < num; i++)
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
   }*/
   sort(ratio,p,wt,0,num);
   f_knapsack(num,wt,p,capacity);
   return(0);
}


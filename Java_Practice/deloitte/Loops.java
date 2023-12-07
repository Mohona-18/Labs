package deloitte;
import java.util.*;
public class Loops {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter no:");
        int n=in.nextInt();
        int d=0,s=0;
        while(n>0)
        {
            d=n%10;
            s+=(d*d);
            n=n/10;
        }
        System.out.println("Sum of sq. of each digit :");
        System.out.println(s);

    int t=0;int j,i;
        for( i=1,j=0;i<5&j<5;++i,j=i+1)
        t+=i;
        System.out.println(t);
      //  System.out.println(i);
        //for(int j=1;j<2*i;j+=2)
        //t+=i*j;
       // System.out.println(i+" "+j);
        //System.out.println("++++++++++");
        //System.out.println(t);
       // int a[]={0,2,4,1,3};
        //for(int i=0;i<a.length;i++)
        //a[i]=a[(a[i]+3)%a.length];
        //System.out.println(a[1]);


       // while(1){

        //}
    }
}

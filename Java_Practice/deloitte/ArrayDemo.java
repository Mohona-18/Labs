package deloitte;
import java.util.*;
public class ArrayDemo {
    public static void main(String[] args) {
        int[] v= {1,2,3,4,5,6};
        int g[]=new int[6];
        g=v;
        int h[]=new int[v.length];
        h=Arrays.copyOf(v,v.length);
         for (int i : h) {
        System.out.println(i);
        }
        for(int i:g)
        System.out.println(i);
       System.out.println(v);
        int a[]=new int[4];
          for(int i=0;i<a.length;i++)
        {   Scanner in=new Scanner(System.in);
            a[i]=in.nextInt();
        }
        a[0]=1;
        a[1]=2;
        a[2]=3;
        a[3]=4;
        System.out.println(a);
        for (int i : a) {
        System.out.println(i);
        }
      
            
        }
    }
    


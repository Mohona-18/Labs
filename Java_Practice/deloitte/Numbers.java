package deloitte;
import java.util.Scanner;
public class Numbers {
    private int n;
    Numbers(int x)
    {
        n=x;
    }
    void sum_digit()
    {
        int t=n,s=0;
        while(t>0)
        {
            s+=(t%10);
            t=t/10;
        }
        System.out.println("Sum of Digits:"+s);
    }
    void numerology_number()
    {
        int t=n,s=0;
        while(t>0||s>9)
        {   
            if(t==0)
            {
                t=s;
                s=0;
            }
            s+=(t%10);
            t=t/10;
        }
        System.out.println("Numerology no:"+s);
    }
    void count()
    {   int e=0,o=0,t=n;
        while(t>0){
        int d=t%10;
        if (d%2==0)
        e++;
        else
        o++;
        t=t/10;
        }
        System.out.println("No. of even digits:"+e+"\nNo. of odd digits:"+o);
    }
    public  static void main(String[] args) {
        Scanner in=new Scanner (System.in);
        System.out.println("Enter a number");
        int x=in.nextInt();
        Numbers obj=new Numbers(x);
        obj.sum_digit();
        obj.numerology_number();
        obj.count(); 
    }   
}

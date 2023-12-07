package deloitte;
import java.util.*;
public class Account {
    private  long account;
    private double balance;

     Account(long a,double b)
    {
        account=a;
        balance=b;
    }
     void display()
    {
        System.out.println("Account no: "+account
        +"\n Current Balance: "+balance);
    }
       void deposit(double d)
    {
        balance+=d;
      
    }
    void withdraw(double w)
    {   
        if(balance-w>=0){
            balance-=w;

        }
        else
        {
            System.out.println("Insufficient Balance");
        }
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        
        System.out.println("Enter account no");
        long a=in.nextLong();
        System.out.println("Enter Intial Balance");
        double b=in.nextDouble();
        Account obj=new Account(a,b);
        System.out.println("Enter amt to be deposited");
        double d=in.nextDouble();
        obj.deposit(d);
        obj.display();
        System.out.println("Enter amt to be withdrawn");
        double w=in.nextDouble();
        obj.withdraw(w);
        obj.display();
    }
    
}

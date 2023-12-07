package deloitte;
import java.util.Scanner;
public class Car {
    private String company="Maruti";
    private int model=2010;
    private int engineVersion=2;
    private  String carType="FAM";
    Car(String company)
    {
        this.company=company;
    }

    
    Car(String company,String carType)
    {
        this.company=company;
        this.carType=carType;
    }
     Car(int e,String type)
    {
        engineVersion=e;
        carType=type;
    }
   public String toString()
    {
        return "Company: "+company+" model="+model+" engine Verion="+engineVersion+" car Type="+carType;
        
    }
   
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.println("Enter Car Comapny");
        String n=in.next();
        Car c1=new Car(n);
        System.out.println("Enter car company and type");
        String a=in.next();
        String b=in.next();
        Car c2=new Car(a,b);
        System.out.println("Enter Car Engine Version and type");
        int x=in.nextInt();
        String t=in.next();
        Car c3=new Car(x,t);
        System.out.println(c1);
        System.out.println(c2);
        System.out.println(c3);
    }
}

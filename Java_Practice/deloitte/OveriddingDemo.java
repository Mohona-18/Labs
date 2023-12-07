package deloitte;
class Vehicle
{
    int w=4;
    void run()
    {
        System.out.println("Vehicle Run");
    }
}
class Scooter extends Vehicle
{   
    int w=8;
      void run(int a)
    {       System.out.println(super.w);
        System.out.println("Scooter Run");
    }
    void display()
    {
        System.out.println("Display");
    }
}
public class OveriddingDemo {
    public static void main(String[] args) {
        Scooter obj=new Scooter();
        obj.run();
       // System.out.println(super.w);
        System.out.println(obj.w);
        Vehicle o=new Vehicle();
        o.run();
        Vehicle j=new Scooter();
        j.run();
        System.out.println(j.w);

        //j.display();//undefined for Vehicle
    }
}

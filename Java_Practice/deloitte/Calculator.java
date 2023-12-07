package deloitte;

public class Calculator {
   protected int n1=909;
    public int n2=789;
    public Calculator()
    {
        System.out.println("Default Constructore");
    }
    static{
        System.out.println("Static block 1");
    }
    {
        System.out.println("Instance Block");
    }
    void add(int a,int b)
    {
        n1=a;
        n2=b;
        System.out.println("Add");
    }
    static void f()
    {
        System.out.println("Static");
    }
    public static void main(String[] args) {
        f();
        Calculator obj=new Calculator();
        obj.add(3, 7);
        Calculator obj2=new Calculator();
        System.out.println(obj2);
    }
    static{
        System.out.println("Static Block 2");
    }
    interface abc{}
    class ed{}
}

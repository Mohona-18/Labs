package deloitte;

public class ConstructorDemo {
    int a;
    ConstructorDemo(int a)
    {
        //a=a;// then 7 0
        this.a=a;
        System.out.println(a);
    }
    public static void main(String[] args) {
        ConstructorDemo obj=new ConstructorDemo(7);
        System.out.println(obj.a);
    }
}

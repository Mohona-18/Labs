package deloitte;
/* Variables
 * local 
 * instance
 * static
 */


public class MethodDemo {
    static int n1;
    int n2;
    void display()
    {
        System.out.println("Instance Function");
        n1=90;
    }
    static int add(int a,int b)
    {   n1=345;
        System.out.println(n1);
        int x=a+b;
        System.out.println("Add: "+x);
        return x;
    }
    public static void main(String[] args) {
        int x=add(9,8);
        System.out.println(x);
        MethodDemo obj=new MethodDemo();
        obj.display();
        System.out.println(n1);
    }
}

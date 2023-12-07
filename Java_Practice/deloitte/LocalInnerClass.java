package deloitte;

public class LocalInnerClass {
    
    private int data=80;
     void display(){
        class Local{
            void msg()
            {
                System.out.println("Normal Local Inner Class:"+data);
            }
        }
        abstract class A{
            void func()
            {
                System.out.println("Func in Abstract Local Inner Class");
            }
        }
        class In extends A{//Local Inner Class
            void show()
            {   System.out.println("LocalInnerClass that extends Abstract Local Inner show(): Concrete");
                In obj=new In();
                obj.func();
            }
        }
        Local l=new Local();
        l.msg();
        In i=new In();
        i.show();
    }
    public static void main(String[] args) {
        LocalInnerClass obj=new LocalInnerClass();
        obj.display();
        
    }
}

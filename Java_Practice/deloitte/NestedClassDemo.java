package deloitte;

public class NestedClassDemo {
    /**
     * InnerNestedClassDemo
     */
    private int data=90;
    private class InnerNestedClassDemo {
    
        void display()
        {
            System.out.println("Inner class:"+data);
        }
    }
    public static void main(String[] args) {
        NestedClassDemo o=new NestedClassDemo();
        NestedClassDemo.InnerNestedClassDemo obj=o.new InnerNestedClassDemo();
        obj.display();
    }   
}
;
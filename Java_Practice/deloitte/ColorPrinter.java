package deloitte;

class ColorPrinter implements InterfaceDemo
{
    public void print()
    {
        System.out.println("Print Color");
    }
    public static void main(String[] args) {
    // InterfaceDemo o=new InterfaceDemo() ;//Error
    ColorPrinter o=new ColorPrinter();
    o.print();
    InterfaceDemo.h();
    }
}
package deloitte;
class Scan{
    void scanning()
    {
        System.out.println("Scanning...");
    }
}


public class BlackPrinter extends Scan implements InterfaceDemo,Fax {
    public void print()
    {
        System.out.println("Black Print");
    }
    @Override
    public void sendFax() {
        System.out.println("Send Fax");
    }
    public static void main(String[] args) {
        BlackPrinter o=new BlackPrinter();
        o.print();
        o.scanning();
        o.sendFax();
        Fax l=new BlackPrinter();
    }
    
}

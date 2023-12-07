package deloitte;
import java.util.*;
public class EncapsulationDemo {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        Employee_Encapsulation obj=new Employee_Encapsulation();

        obj.setId(in.nextInt());
        obj.setName(in.next());
        obj.display();
        System.out.println(obj.getId()+" "+obj.getName());
    }
}

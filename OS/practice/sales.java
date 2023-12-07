
package OS;
import WT.employee;
public class sales extends employee
{
    public void tallowance(double e)
    {  
        System.out.println("Earnings="+e);
        System.out.println("Travel All.="+(0.5*e));
    }

    public static void main(String args[])
    {
        sales obj=new sales();
        obj.input();
        obj.display();
        double e=obj.earnings();
        obj.tallowance(e);
    }
}

package com.deloitte.training;
public class Main 
{
    public static void main(String[] args) 
    {
         Employee e=new Employee();

        System.out.println("Employee Id:"+e.emp_id 
                            +"\nThe Salary of Employee:"+e.empSalary 
                            +"\nPercentage of Tax Employee needs to be pay:"+ e.empTax
                            +"\nThe Total no of working days is:"+ e.empDaysOfWork);
        e.calculatePf();
    }
}
  
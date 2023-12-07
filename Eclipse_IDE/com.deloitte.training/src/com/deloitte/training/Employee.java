package com.deloitte.training;

public class Employee {
    long emp_id;
    double empSalary;
    float empTax;
    int empDaysOfWork;

    Employee()
    {
        emp_id=345;
        empSalary=10000d;
        empTax=9.5f;
        empDaysOfWork=24;

    }
    void calculatePf()
    {
        float pfRate=10.5f;
        System.out.println("The Pf Rate is "+ pfRate);
    }
}
package com.deloitte.training;
public class multiple_main {
    public static void main(String args[])//1
    {
    System.out.println("Defined Main");
    //main();//3 
    }

    public static void main()//2
    {
        System.out.println("Main with noargs");
    }
    //1 and 2 executed then OP Defined MAin
    //1 2 3 executed then defined MAin Main with no args
}
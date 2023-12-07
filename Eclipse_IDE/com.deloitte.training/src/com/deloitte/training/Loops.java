package com.deloitte.training;
import java.util.*;
public class Loops {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		 Scanner in=new Scanner(System.in);
	        System.out.println("Enter no:");
	        int n=in.nextInt();
	        int d=0,s=0;
	        while(n>0)
	        {
	            d=n%10;
	            s+=(d*d);
	            n=n/10;
	        }
	        System.out.println("Sum of sq. of each digit :");
	        System.out.println(s);

	    
	}

}

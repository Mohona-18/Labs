package com.deloitte.training;

public class Variables {
	 	int a=87;
	    static int g=9;
	    void method()
	    {
	        int c=89;
	        System.out.println(c);
	    }
	    public static void main(String[] args) {
		// TODO Auto-generated method stub
	    	System.out.println(g);
	        Variables o=new Variables();
	        System.out.println(o.a);
	        o.method();
	}

}

using System;

namespace Basics
{
    class one
    {
        public void cond1(){
            System.Console.WriteLine("Q1");
            System.Console.Write("Enter no:");
            var a=Convert.ToInt32(Console.ReadLine());
            if(a>=1&&a<=10)
            Console.WriteLine("Valid");
            else
            System.Console.WriteLine("Invalid");
            System.Console.WriteLine("Q2");
             System.Console.Write("Enter no:");//width
            var x=Convert.ToInt32(Console.ReadLine());
             System.Console.Write("Enter no:");//height
            var y=Convert.ToInt32(Console.ReadLine());
            System.Console.WriteLine("The maximum of "+x+" "+y+" is "+Math.Max(x,y));

            if(x>y)
            System.Console.WriteLine("Landscape");
            else
            System.Console.WriteLine("Portrait");

        }
        public void cond2()
        {
            System.Console.WriteLine("Enter speed Limit");
            var x=Convert.ToInt32(Console.ReadLine());

            System.Console.Write("Enter Speed");
           //var s=int.Parse(Console.ReadLine());
            //string s=Console.ReadLine();
            var s=Convert.ToInt32(Console.ReadLine());
            if(s<x)
            System.Console.WriteLine("Valid Speed");
            else
            {
                var d=Math.Abs(x-s)/5;
                if(d<12)
                System.Console.WriteLine("Demerit point:"+d);
                else
                System.Console.WriteLine("Suspended as points is:"+d);
            }

        }
    }
    
}
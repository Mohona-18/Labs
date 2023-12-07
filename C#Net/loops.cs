namespace Basics
{
    class loops
    {
        public void f1()
        {   var c=0;
            for(var i=1;i<=100;i++)
            if(i%3==0)
            c++;

            System.Console.WriteLine(c);

            System.Console.WriteLine("Enteer no.");
            var n=Convert.ToInt32(System.Console.ReadLine());
            var p=1;
            for( var i=1;i<=n;i++)
            p*=i;
            System.Console.WriteLine("Factorial="+p);
        }
        public void f2()
        {   var s=0;
            string str="";
            do{
                System.Console.Write("Enter no. ");
                int n=Convert.ToInt32(Console.ReadLine());
                 s+=n;
                System.Console.WriteLine("Enter yes to continue else no");
                str=Console.ReadLine();
            }
            while(str=="yes");
            System.Console.WriteLine("Total count "+s);
        }

    }
}
    
    


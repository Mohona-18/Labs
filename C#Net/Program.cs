// See https://aka.ms/new-console-template for more information
//Console.WriteLine("Hello, World!");

namespace Basics
{
  class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine("Part 1 of basics"); 
      var obj=new Name.two();
      obj.func();  
      obj.f1();
      Name.two.f(); 
    /*
      var obj=new Name.two();
      obj.func();
    
      //Dates
      var obj1=new DateSample.dates();
      obj1.date_func();

      //times
      var obj2=new Name.times();
      obj2.time_func();
    
    */
    
    /*
    var c=new one();
    c.cond1();
    c.cond2();
    */
    var d=new loops();
    //d.f2();
    d.f1();

    }
  }

  
}
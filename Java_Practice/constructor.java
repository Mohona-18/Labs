public class constructor {
    int x;
/*   constructor()
    {
        x=0;
    }*/
    constructor(int a)
    {
        x=a;
    }
    constructor(int a, int b)
    {
        x=a+b;
    }
    constructor(constructor a)
    {
        x=a.x;
    }
    public static void main(String[] args) {
       //  constructor o1=new constructor();
        constructor o2=new constructor(2);
        constructor o3=new constructor(5, 6);
        constructor o4=new constructor(o2);
        System.out.println(" "+" "+o2.x+" "+o3.x+" "+o4.x);
    }
}

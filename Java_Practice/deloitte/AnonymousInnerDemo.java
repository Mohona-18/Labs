package deloitte;

abstract class Person{
    abstract void eat();
    void display()
    {
        System.out.println("Non abstract in Anonymous");
    }
}
/**
 * A
 * void intEat();
 */



public class AnonymousInnerDemo //(Usually) extends Person
{
    public static void main(String[] args) {
        Person o=new Person() {
            public void eat(){
                System.out.println("Eat in Anonymous Inner Class: Abstract Class");
            }
           
        };
        o.eat();
        o.display();
        A obj=new A(){
              public void Eating(){
                System.out.println("Eating in Anonymous Inner Class: Interface");
            }
        };
        obj.Eating();
    }
    /* Usually
     * void eat()
     * {
     * Sopln("Person is eating");
     * }
     */
}

package deloitte;

public class Employee_Encapsulation {
    private int id;
    private String name;

    public int getId() {
        return id;
    }
    public String getName() {
        return name;
    }
    public void setId(int id) {
        this.id = id;
    }
    public void setName(String name) {
        this.name = name;
    }
    void display()
    {
        System.out.println(id+" "+name);
    }
}

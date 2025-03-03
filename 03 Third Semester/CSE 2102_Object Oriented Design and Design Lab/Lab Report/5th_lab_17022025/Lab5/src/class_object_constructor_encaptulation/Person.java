package class_object_constructor_encaptulation;

public class Person {
    private int age;
    private String name;

    public Person() {
        System.out.println("Default constructor for Person is called.");
    }
    
    public void setAge(int age){
        this.age=age;
    }
    
    public void setName(String name) {
        this.name=name;
    }
    
    public int getAge(){
        return age;
    }
    
    public String getName() {
       return name;
    }
}

package MainDefaultConstructor;

class Person {
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

public class Main{
    public static void main(String[] args) {
        Person p1 = new Person();
        
        p1.setName("Mahfuz");
        System.out.println("The person name:" + p1.getName());
        
        p1.setAge(23);
        System.out.println("The person age:"+ p1.getAge()); 
    }
}

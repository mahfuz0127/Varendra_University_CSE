package ParameterizeConstructor;

class Student {
    private int id;
    private String dept;
    public Student(int id){
        System.out.println("parameterise constructor set a default id:" + id );
    }
    
    public void setId(int id){
        this.id=id;
    }
    public int getId(){
        return id;
    }
    
    public void setDept(String dept) {
        this.dept=dept;
    }
    public String getDept() {
       return dept;
    }
    
}

public class Main {
    public static void main(String[] args) {
        Student s1 = new Student(0);
        
        s1.setId(241311058);
        System.out.println("The Student Id:" + s1.getId());
        
        s1.setDept("CSE");
        System.out.println("Department:" + s1.getDept());
        
    }
}

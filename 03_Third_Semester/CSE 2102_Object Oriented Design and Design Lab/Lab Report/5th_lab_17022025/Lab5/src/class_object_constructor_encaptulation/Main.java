package class_object_constructor_encaptulation;

public class Main {
    public static void main(String[] args) {
        Person p1 = new Person();
        
        p1.setName("Mahfuz");
        System.out.println("The person name:" + p1.getName());
        
        p1.setAge(23);
        System.out.println("The person age:"+ p1.getAge());
        
        Student s1 = new Student(0);
        
        s1.setId(241311058);
        System.out.println("The Student Id:" + s1.getId());
        
        s1.setDept("CSE");
        System.out.println("Department:" + s1.getDept());
        
        s1.setSection('B');
        System.out.println("Section:" + s1.getSection());
        
        s1.setSemester("3rd");
        System.out.println("Semester:" + s1.getSemester());
        
        s1.setSession("34th");
        System.out.println("Session:" + s1.getSession());
        
        Employee E1 = new Employee();
        
        E1.setEPosition("HR Head");
        System.out.println("Employee Position: " + E1.getEPosition());
        
        E1.setESalari(20000);
        System.out.println("Employee Salari: " + E1.getESalai());  
    }
}

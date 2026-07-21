package class_object_constructor_encaptulation;

public class Student {
    private int id;
    private String session;
    private String semester;
    private String dept;
    private char section; 
    public Student(int id){
        System.out.println("parameterise constructor set a default id:" + id );
    }
    
    public void setId(int id){
        this.id=id;
    }
    public int getId(){
        return id;
    }
    
    public void setSession(String session) {
        this.session=session;
    }
    public String getSession() {
       return session;
    }
    
    public void setSemester(String semester) {
        this.semester=semester;
    }
    public String getSemester() {
       return semester;
    }
    
    public void setDept(String dept) {
        this.dept=dept;
    }
    public String getDept() {
       return dept;
    }
    
    public void setSection(char section) {
        this.section=section;
    }
    public char getSection() {
       return section;
    }
}

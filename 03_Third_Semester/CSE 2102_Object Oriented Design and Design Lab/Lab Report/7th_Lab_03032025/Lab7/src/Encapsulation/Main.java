package Encapsulation;

class Employee {
    private int salari;
    private String position;
    
    public void setESalari(int salari){
        this.salari=salari;
    }
    public int getESalai(){
        return salari;
    }

    public void setEPosition(String position) {
        this.position=position;
    }
    public String getEPosition() {
       return position;
    }
    
}

public class Main {
    public static void main(String[] args) {
        Employee E1 = new Employee();
        
        E1.setEPosition("HR Head");
        System.out.println("Employee Position: " + E1.getEPosition());
        
        E1.setESalari(20000);
        System.out.println("Employee Salari: " + E1.getESalai());  
    }
}

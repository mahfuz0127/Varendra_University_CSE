/*
3. Write a Java program to define a class Employee with instance variables name 
and id, along with a method calculateSalary(). Create two subclasses, Worker and 
Supervisor, each having additional instance variables baseSalary and bonus. In 
both subclasses, override the calculateSalary() method to compute and return the 
salary.
 */
package salaryOverride;

class Employee {
    String name;
    int id;

    Employee(String name, int id) {
        this.name = name;
        this.id = id;
    }

    double calculateSalary() {
        return 0.0;
    }

    void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
    }
}

class Worker extends Employee {
    double baseSalary;
    double bonus;

    Worker(String name, int id, double baseSalary, double bonus) {
        super(name, id);
        this.baseSalary = baseSalary;
        this.bonus = bonus;
    }

    double calculateSalary() {
        return baseSalary + bonus;
    }
}

class Supervisor extends Employee {
    double baseSalary;
    double bonus;

    Supervisor(String name, int id, double baseSalary, double bonus) {
        super(name, id);
        this.baseSalary = baseSalary;
        this.bonus = bonus;
    }

    double calculateSalary() {
        return baseSalary + bonus;
    }
}

public class Main {
    public static void main(String[] args) {
        //compile time
        Worker w1 = new Worker("Mahfuz", 1058, 30000, 5000);

        System.out.println("Worker Details:");
        w1.displayInfo();
        System.out.println("Salary: " + w1.calculateSalary());
        
        //run time
        Employee s1 = new Supervisor("Abdullah", 0127, 50000, 10000);

        System.out.println("\nSupervisor Details:");
        s1.displayInfo();
        System.out.println("Salary: " + s1.calculateSalary());
    }
}

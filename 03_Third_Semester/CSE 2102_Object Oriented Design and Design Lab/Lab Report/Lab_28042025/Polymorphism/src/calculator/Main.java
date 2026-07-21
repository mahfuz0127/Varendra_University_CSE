/*
1. Create a Java class Calculator that provides different ways to perform addition. 
Include three methods: The first method takes two integer numbers, the second 
method takes three integer numbers, and the third method takes two double 
numbers. In the main method, create an object of Calculator class.
 */
package calculator;

class Calculator{
    public int addition(int a, int b){
        return a+b;
    }
    public int addition(int a, int b, int c){
        return a+b+c;
    }
    public double addition(double a, double b){
        return a+b;
    }
}

public class Main {
    public static void main(String[] args) {
        Calculator cl = new Calculator();
        
        System.out.println("add two integer number: " + cl.addition(3, 6));
        System.out.println("add three integer number: " + cl.addition(3, 6, 5));
        System.out.println("add two double number: " + cl.addition(3.5, 6.6));
    }
}

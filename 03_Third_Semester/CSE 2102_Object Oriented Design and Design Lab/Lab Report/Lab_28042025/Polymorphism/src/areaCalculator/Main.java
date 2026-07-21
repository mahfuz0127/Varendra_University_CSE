/*
2. Create a Java class Shape that provides different ways to calculate the area. 
Include three methods: the first method takes one parameter (side length) to 
calculate the area of a square, the second method takes two parameters (length 
and width) to calculate the area of a rectangle, and the third method takes one 
decimal parameter (radius) to calculate the area of a circle. In the main method, 
create an object of Shape class.
 */
package areaCalculator;

class Shape{
    public void areaCalculate(double length){
        System.out.println("Area of Squar: " + (length*length) );
    }
    public void areaCalculate(double length,double width){
        System.out.println("Area of rectangle: " + (length*width) );
    }
    public void areaCalculate(float radius){
        System.out.println("Area of circle: " + ((radius*radius)*3.1416f) );
    }
}

public class Main {
    public static void main(String[] args) {
        Shape s =new Shape();
        
        s.areaCalculate(5.6);
        s.areaCalculate(5,6);
        s.areaCalculate(5.5f);
    }
}

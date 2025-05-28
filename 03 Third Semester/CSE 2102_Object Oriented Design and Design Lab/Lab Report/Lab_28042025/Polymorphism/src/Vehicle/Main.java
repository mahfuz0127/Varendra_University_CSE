/*
Write a Java program to define a class Vehicle with a method speedUp(). Create 
two subclasses: Car and Bicycle, each having an instance variable currentSpeed. 
In both subclasses, override the speedUp() method to increase the vehicle's speed 
differently.
 */
package Vehicle;

class Vehicle {
    void speedUp() {
        System.out.println("Vehicle is speeding up...");
    }
}

class Car extends Vehicle {
    int currentSpeed;

    Car(int speed) {
        this.currentSpeed = speed;
    }

    void speedUp() {
        currentSpeed += 30;
        System.out.println("Car speed increased to: " + currentSpeed + " km/h");
    }
}

class Bicycle extends Vehicle {
    int currentSpeed;

    Bicycle(int speed) {
        this.currentSpeed = speed;
    }

    void speedUp() {
        currentSpeed += 5;
        System.out.println("Bicycle speed increased to: " + currentSpeed + " km/h");
    }
}

public class Main {
    public static void main(String[] args) {
        Car car = new Car(60);
        System.out.println("Initial Car Speed: " + car.currentSpeed + " km/h");
        car.speedUp();

        Bicycle bicycle = new Bicycle(10);
        System.out.println("\nInitial Bicycle Speed: " + bicycle.currentSpeed + " km/h");
        bicycle.speedUp();
    }
}

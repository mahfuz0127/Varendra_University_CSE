package inheritence;

class Vehicle {
    String brand = "Generic Vehicle";
    int wheels = 4;

   public void start() {
      System.out.println(brand + " is starting... with " + wheels + " wheels" );
   }
}

class Truck extends Vehicle {
    Vehicle CtV = new Vehicle();
    
    public void changeData(){
        CtV.brand = "Mahindra" ;
        CtV.wheels = 12;
    }

    public void displayDetails() {
        System.out.println("Truck Brand " + CtV.brand);
        System.out.println("Truck Wheel " + CtV.wheels);
    }
}


public class Car extends Truck {
    public static void main(String[] args) {
        Car TtC = new Car();
        
        TtC.start();
        
        TtC.brand = "CHR" ;
        TtC.wheels = 4 ;
        
        System.out.println("Car Brand " + TtC.brand);
        System.out.println("Car Wheel " + TtC.wheels);
        
        TtC.changeData();
        TtC.displayDetails();        
    }
    
}

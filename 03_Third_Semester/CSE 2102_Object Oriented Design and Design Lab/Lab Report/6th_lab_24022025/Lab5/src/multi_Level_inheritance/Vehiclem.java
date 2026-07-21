package multi_Level_inheritance;

class Vehiclem {
    protected String brand = "Ferrari";
    public void honk() {   
        System.out.println("pip, pip!");
    }
}

class Car extends Vehiclem {
    protected String modelName = "FR00125"; 

    public void car() {
        System.out.println(this.brand + " " + this.modelName);
    }
}

class Car2 extends Car {
    private String modelName2 = "FR0011253"; 

    public void displayDetails() {
        System.out.println("Additional Model: " + modelName2);
    }

    public static void main(String[] args) {
        Car2 myCar2 = new Car2(); 
        myCar2.honk();
        myCar2.displayDetails();  
    }
}

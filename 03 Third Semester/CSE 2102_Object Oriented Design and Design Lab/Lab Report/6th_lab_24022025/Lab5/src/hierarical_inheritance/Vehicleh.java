package hierarical_inheritance;

class Vehicleh {
    protected String brand = "Ferrari";
    
    public void honk() { 
        System.out.println("pip, pip!");
    }
}

class Car extends Vehicleh {
    protected String modelName = "FR00125";

    public void car() {
        System.out.println(this.brand + " " + this.modelName);
    }
}

class Car2 extends Vehicleh {
    private String modelName2 = "FR0011253";

    public void displayDetails() {
        System.out.println("Additional Model: " + modelName2);
    }

    public static void main(String[] args) {
        Car myCar = new Car();
        Car2 myCar2 = new Car2();

        myCar.honk();
        myCar.car();

        myCar2.honk();
        myCar2.displayDetails();
    }
}

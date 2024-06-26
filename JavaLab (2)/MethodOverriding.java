//Runtime Polymorphism(Method Overriding)


public class MethodOverriding {
    public static void main(String[] args) {
        Vechile obj = new Bike();
        obj.speed();
    }
}

class Vechile {
    public void speed() {
        System.out.println("Vehicle speed = 60kmph");
    }
}

class Bike extends Vechile {
    public void speed() {
        System.out.println("Bike speed = 40kmph");
    }
}

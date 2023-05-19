package Creational_design_pattern.Builder;

public class Main {
    public static void main(String[] args) {
        Car car=new Car.Builder("Ford","Mustang").setYear(2023).setColor("Yellow").build();
        System.out.println(car.getName());
        System.out.println(car.getModel());
        System.out.println(car.getYear());
        System.out.println(car.getColor());
    }
}

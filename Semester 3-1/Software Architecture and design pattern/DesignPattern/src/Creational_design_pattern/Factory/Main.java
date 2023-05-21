package Creational_design_pattern.Factory;

public class Main {
    public static void main(String[] args) {
        MobileFactory mobileFactory =new MobileFactory();
        Mobile mobile=mobileFactory.createMobile("Iphone");
        mobile.createMobile();
    }
}

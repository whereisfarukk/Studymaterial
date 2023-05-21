package Creational_design_pattern.Factory;

public class Iphone implements Mobile{
    @Override
    public void createMobile() {
        System.out.println("creating Iphone mobile");
    }
}

package Creational_design_pattern.Abstruct_Factory;

public class Main {
    public static void main(String[] args) {
        AbstractFactory abstractFactory=new CreateFactory1();
        ProductA productA=abstractFactory.createProductA();
        productA.operationA();
    }
}

package Creational_design_pattern.Abstruct_Factory;

public class CreateFactory1 implements AbstractFactory{
    @Override
    public ProductA createProductA() {
        return new ConcreteProductA1();
    }

    @Override
    public ProductB createProductB() {
        return new ConcreteProductB1();
    }
}

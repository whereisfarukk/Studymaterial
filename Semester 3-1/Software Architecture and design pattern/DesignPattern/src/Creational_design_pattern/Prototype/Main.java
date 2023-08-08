package Creational_design_pattern.Prototype;

public class Main {
    public static void main(String[] args) {
        Shape circlePrototype = new Circle("Red", 5);
        Shape rectanglePrototype = new Rectangle("Blue", 8, 6);

        Shape clonedCircle = circlePrototype.clone();
        Shape clonedRectangle = rectanglePrototype.clone();

        circlePrototype.draw();
        clonedCircle.draw();

        rectanglePrototype.draw();
        clonedRectangle.draw();
    }
}
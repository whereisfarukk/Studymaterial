public class Main {
    public static void main(String[] args) {
        Shape circle = new Circle(5);
        Shape rectangle = new Rectangle(4, 6);
        Shape triangle = new Triangle(3, 8);

        ShapeCalculator calculator = new ShapeCalculator();

        System.out.println("Area of Circle: " + calculator.calculateArea(circle));
        System.out.println("Area of Rectangle: " + calculator.calculateArea(rectangle));
        System.out.println("Area of Triangle: " + calculator.calculateArea(triangle));
    }
}

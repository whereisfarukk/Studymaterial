package Creational_design_pattern.Prototype;

public class Main {
    public static void main(String[] args) {
        Circle c1=new Circle(2,3,4);
        c1.color="red";
        c1.draw();

        Circle c2 = c1.CLONE();
        c2.draw();
    }
}

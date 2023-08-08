package Creational_design_pattern.Prototype;

class Circle implements Shape {
    private String color;
    private int radius;

    public Circle(String color, int radius) {
        this.color = color;
        this.radius = radius;
    }
    public Circle(Circle circle) {
        if(circle!=null) {
            this.radius = circle.radius;
            this.color = circle.color;
        }
    }
    @Override
    public void draw() {
        System.out.println("Drawing a circle with color " + color + " and radius " + radius);
    }

    @Override
    public Shape clone() {
        return new Circle(this);
    }
}
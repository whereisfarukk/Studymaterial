package Creational_design_pattern.Prototype;

class Rectangle implements Shape {
    private String color;
    private int width;
    private int height;

    public Rectangle(String color, int width, int height) {
        this.color = color;
        this.width = width;
        this.height = height;
    }
    public Rectangle(Rectangle rectangle) {
        this.color = rectangle.color;
        this.width = rectangle.width;
        this.height = rectangle.height;
    }
    @Override
    public void draw() {
        System.out.println("Drawing a rectangle with color " + color + ", width " + width + ", and height " + height);
    }

    @Override
    public Shape clone() {
        return new Rectangle(this);
    }
}
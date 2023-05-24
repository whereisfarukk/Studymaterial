package Creational_design_pattern.Prototype;

public class Circle implements Cloneable{
    public String color;
    private int x;
    private int y;
    private int radius;
    public  Circle(int x,int y,int radius){
        this.x=x;
        this.y=y;
        this.radius=radius;
    }

    public Circle(Circle circle) {
        if(circle!=null) {
            this.x = circle.x;
            this.y = circle.y;
            this.radius = circle.radius;
            this.color = circle.color;
        }
    }
    void draw(){
        System.out.println("Circle drawn on (" + x + ", "+ y + ")" + " Color: " + color);
    }
    public Circle CLONE(){
        return new Circle(this);
    }
}

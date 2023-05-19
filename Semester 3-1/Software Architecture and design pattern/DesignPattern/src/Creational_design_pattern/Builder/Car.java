package Creational_design_pattern.Builder;

public class Car {
    private String make;
    private String model;
    private int year;
    private String color;
    private  Car(Builder builder){
        this.make=builder.make;
        this.model=builder.model;
        this.year=builder.year;
        this.color=builder.color;
    }
    public String getName(){
        return make;
    }
    public String getModel(){
        return model;
    }
    public int getYear(){
        return year;
    }
    public String getColor(){
        return color;
    }
    public static class Builder{
        private String make;
        private String model;
        private int year;
        private String color;
        public Builder(String make,String model){
            this.make=make;
            this.model=model;
        }
        public Builder setYear(int year){
            this.year=year;
            return this;
        }
        public Builder setColor(String color){
            this.color=color;
            return this;
        }
        public Car build(){
            return new Car(this);
        }
    }
}

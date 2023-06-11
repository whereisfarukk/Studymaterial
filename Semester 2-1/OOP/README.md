### Realization :
```java
// Interface
interface Printable {
    void print();
}

// Class implementing the interface
class Printer implements Printable {
    @Override
    public void print() {
        // Implementation of the print method
        System.out.println("Printing...");
    }
}
```

### Generalization/Inheritance :
```java
// Base class
class Animal {
    void eat() {
        System.out.println("Animal is eating.");
    }
}

// Derived class inheriting from Animal
class Dog extends Animal {
    void bark() {
        System.out.println("Dog is barking.");
    }
}
```

### association:
```java
// Class representing a Car
class Car {
    private String model;
    
    public Car(String model) {
        this.model = model;
    }
    
    public String getModel() {
        return model;
    }
}

// Class representing a Driver
class Driver {
    private String name;
    private Car car;
    
    public Driver(String name, Car car) {
        this.name = name;
        this.car = car;
    }
    
    public String getName() {
        return name;
    }
    
    public Car getCar() {
        return car;
    }
}

public class Main {
    public static void main(String[] args) {
        Car car = new Car("Toyota Camry");
        Driver driver = new Driver("John Doe", car);
        
        System.out.println("Driver: " + driver.getName());
        System.out.println("Car: " + driver.getCar().getModel());
    }
}
```
In this example, there is an association between the Driver class and the Car class. The Driver class has a reference to a Car object.

In the main() method, we create a Car object with the model "Toyota Camry". We then create a Driver object named "John Doe" and pass the Car object to the Driver constructor. Finally, we print the driver's name and the model of the car they are associated with.

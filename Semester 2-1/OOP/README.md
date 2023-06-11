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
$\textrm{\large In this example, the \textbf{“Printer”} class realizes the \textbf{“Printable”} interface by implementing the \textbf{“print()”} method defined in the}$  $\textrm{\large interface. The \textbf{“Printer”} class provides its own implementation for the \textbf{“print()”} method.}$

$\textrm{\large It's important to note that realization is specific to interfaces in Java.}$
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
$\textrm{\large In this example, the \textbf{“Dog”} class inherits from the \textbf{“Animal”} class using the \textbf{“extends”} keyword. The \textbf{“Dog”} class can access}$ $\textrm{\large the \textbf{“eat()”} method defined in the \textbf{“Animal”} class, and it also has its own method \textbf{“bark()”}. The \textbf{“Dog”} class inherits the}$ $\textrm{\large behavior of the \textbf{“Animal”} class and adds its own specific behavior.}$

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

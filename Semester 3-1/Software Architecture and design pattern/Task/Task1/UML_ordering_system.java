package UML_Ordering_System;

import java.util.ArrayList;
import java.util.List;

class Item {
    private String name;
    private double price;
    private double weight;

    public Item(String name, double price, double weight) {
        this.name = name;
        this.price = price;
        this.weight = weight;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public double getWeight() {
        return weight;
    }
}

// Define the Customer class
class Customer {
    private String name;
    private String address;
    private String email;
    private String phone;

    public Customer(String name, String address, String email, String phone) {
        this.name = name;
        this.address = address;
        this.email = email;
        this.phone = phone;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    }

    public String getEmail() {
        return email;
    }

    public String getPhone() {
        return phone;
    }
}

// Define the OrderDetail class
class OrderDetail {
    private Item item;
    private int quantity;

    public OrderDetail(Item item, int quantity) {
        this.item = item;
        this.quantity = quantity;
    }

    public Item getItem() {
        return item;
    }

    public int getQuantity() {
        return quantity;
    }

    public double getSubtotal() {
        return item.getPrice() * quantity;
    }

    public double getWeight() {
        return item.getWeight() * quantity;
    }

    public double getTax(double taxRate) {
        return getSubtotal() * taxRate;
    }
}

// Define the Payment abstract class
abstract class Payment {
    public abstract void processPayment(double amount);
}

// Define the Cash class, which extends the Payment abstract class
class Cash extends Payment {
    @Override
    public void processPayment(double amount) {
        System.out.println("Processing cash payment for ৳" + amount);
    }
}

// Define the Check class, which extends the Payment abstract class
class Check extends Payment {
    private String checkNumber;

    public Check(String checkNumber) {
        this.checkNumber = checkNumber;
    }

    @Override
    public void processPayment(double amount) {
        System.out.println("Processing check payment for ৳" + amount + ", check number " + checkNumber);
    }
}

// Define the Credit class, which extends the Payment abstract class
class Credit extends Payment {
    private String cardNumber;
    private String expirationDate;
    private String cvv;

    public Credit(String cardNumber, String expirationDate, String cvv) {
        this.cardNumber = cardNumber;
        this.expirationDate = expirationDate;
        this.cvv = cvv;
    }

    @Override
    public void processPayment(double amount) {
        System.out.println("Processing credit card payment for ৳" + amount + ", card number " + cardNumber);
    }
}

// Define the Order class
class Order {
    private Customer customer;
    private List<OrderDetail> orderDetails;
    private Payment payment;

    public Order(Customer customer, List<OrderDetail> orderDetails, Payment payment) {
        this.customer = customer;
        this.orderDetails = orderDetails;
        this.payment = payment;
    }

    public double getSubtotal() {
        double subtotal = 0;
        for (OrderDetail orderDetail : orderDetails) {
            subtotal += orderDetail.getSubtotal();
        }
        return subtotal;
    }

    public double getWeight() {
        double weight = 0;
        for (OrderDetail orderDetail : orderDetails) {
            weight += orderDetail.getWeight();
        }
        return weight;
    }

    public double getTax(double taxRate) {
        double tax = 0;
        for (OrderDetail orderDetail : orderDetails) {
            tax += orderDetail.getTax(taxRate);
        }
        return tax;
    }

    public double getTotal(double taxRate) {
        return getSubtotal() + getTax(taxRate);
    }

    public void processPayment() {
        payment.processPayment(getTotal(0.10)); // Apply 10% tax rate
    }
}

public class Task1{

    public static void main(String[] args) {


        // Create a customer
        Customer customer = new Customer("Jisan", "Lake-city Concord,Khilkhet", "jisanahmed10667@gmail.com", "01795809737");

        // Create some items
        Item item1 = new Item("Chocolate", 20, 7);
        Item item2 = new Item("Ice-cream", 250, 231);

        // Create some order details
        OrderDetail orderDetail1 = new OrderDetail(item1, 10);
        OrderDetail orderDetail2 = new OrderDetail(item2, 20);

        // Add the order details to the order
        List<OrderDetail> orderDetails = new ArrayList<>();
        orderDetails.add(orderDetail1);
        orderDetails.add(orderDetail2);

        // Create a payment
        Payment payment = new Credit("0165 1411 1412 5221", "1/24", "123");

        // Create the order
        Order order = new Order(customer, orderDetails, payment);

        // Process the payment and print a confirmation message
        order.processPayment();
        System.out.println("Payment processed for order total of ৳" + order.getTotal(0.10)); // Apply 10% tax rate

    }
}

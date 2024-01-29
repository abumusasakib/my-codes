// In this implementation, the `OrderValidator` class is responsible for order validation, delegates the responsibility of
// subscription validation to the `SubscriptionValidator` class while the `OrderPlacer` class is responsible for order placement.
// Each class has a single responsibility, adhering to the Single Responsibility Principle. This allows
// different teams to work on different aspects of the system without interfering with each other.

// Step 1: Define a class for subscription validation
class SubscriptionValidator {
    public boolean isValidSubscription() {
        // Logic for subscription validation
        System.out.println("Validating subscription.");
        return true;  // Replace with actual validation logic
    }
}

// Step 2: Define a class for order validation
class OrderValidator {
    private SubscriptionValidator subscriptionValidator;

    public OrderValidator(SubscriptionValidator subscriptionValidator) {
        this.subscriptionValidator = subscriptionValidator;
    }

    public boolean isValidOrder() {
        // Logic for order validation, delegating subscription validation
        System.out.println("Validating order.");
        return subscriptionValidator.isValidSubscription();  // Using the subscription validator
    }
}

// Step 3: Define a class for order placement
class OrderPlacer {
    public void placeOrder() {
        // Logic for order placement
        System.out.println("Placing order.");
        // Additional logic for order placement
    }
}

// Step 4: Usage of the classes
public class Main {
    public static void main(String[] args) {
        // Usage without affecting each other
        SubscriptionValidator subscriptionValidator = new SubscriptionValidator();
        OrderValidator orderValidator = new OrderValidator(subscriptionValidator);

        if (orderValidator.isValidOrder()) {
            OrderPlacer orderPlacer = new OrderPlacer();
            orderPlacer.placeOrder();
        } else {
            System.out.println("Invalid order. Order placement failed.");
        }
    }
}

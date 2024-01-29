# Facade

### Overview:

- **Type:** Structural Design Pattern
- **Intent:** Provide a unified interface to a set of interfaces in a subsystem, making it easier to use and understand.

## Introduction

In the context of building a food delivery app, the Facade design pattern is used to simplify the complex processes involved in food ordering and delivery.

# Explanation of the Facade design pattern using the example of the Zomato food delivery app:

### Scenario:

Suppose you want to order food from a restaurant using a food delivery app, and Zomato is the chosen platform. Zomato acts as a facade in this scenario, simplifying the complex process of ordering and delivering food from a restaurant.

### Explanation:

1. **Abstraction by Zomato:**
   - Zomato acts as an abstraction layer or facade between you (the customer) and the entire process of ordering and delivering food.
   - It simplifies the user experience by providing a single interface for ordering food.

2. **Process Simplification:**
   - Instead of directly interacting with individual restaurants, managing orders, and coordinating with delivery partners, you, as a user, interact with Zomato.
   - Zomato takes care of the complexities involved in the entire process.

3. **Ordering Process:**
   - When you place an order through Zomato, the app handles the communication with the restaurant. It communicates your food order, preferences, and delivery details to the restaurant.

4. **Restaurant Interaction:**
   - Zomato intimates the restaurant about the order, specifying the items to be prepared, and any special instructions provided by you.

5. **Delivery Partner Assignment:**
   - Zomato assigns a delivery partner (delivery person) who will pick up the prepared food from the restaurant.

6. **Delivery Process:**
   - The assigned delivery partner receives information from Zomato about the order and the delivery location.
   - The delivery partner picks up the food from the restaurant and delivers it to your specified location.

### Benefits of Zomato as a Facade:

1. **Simplified User Experience:**
   - Users interact with Zomato to place orders, simplifying the overall food ordering experience.

2. **Single Interface:**
   - Zomato provides a unified interface for users to browse restaurants, place orders, and track deliveries, avoiding the need to deal with each restaurant individually.

3. **Abstraction of Complexities:**
   - Zomato abstracts away the complexities involved in coordinating with multiple restaurants and managing the logistics of food delivery.

4. **Order Tracking:**
   - Zomato facilitates order tracking, allowing users to monitor the status of their order and estimated delivery time.

### Example UML Diagram:

```
    Customer          Zomato              Restaurant       Delivery Partner
      |                |                          |                  |
 ------|----------------|--------------------------|------------------|------
 |    |   <<use>>      |                          |                  |
 |    |--------------->|                          |                  |
 |                     |                          |                  |
 |    |                |                          |                  |
 ------|----------------|--------------------------|------------------|------
```

- **Customer:** Interacts with Zomato for ordering food.
- **Zomato (Facade):** Provides a simplified interface for customers, manages order details, communicates with restaurants, and assigns delivery partners.
- **Restaurant:** Receives orders and prepares food based on information provided by Zomato.
- **Delivery Partner:** Assigned by Zomato to pick up food from the restaurant and deliver it to the customer.

### Conclusion:

In this scenario, Zomato acts as a facade, simplifying the complex processes involved in food ordering and delivery. It provides users with a straightforward interface, handles interactions with restaurants, and manages the logistics of food delivery. The Facade design pattern is evident in how Zomato abstracts away the intricacies, making it easier for customers to order and enjoy food from various restaurants.

# Implementation in Python

### Restaurant Class:
```python
class Restaurant:
    def prepare_order(self):
        print("Preparing the order")
```
The `Restaurant` class has a method `prepare_order()` that simulates the process of preparing an order. This class represents the responsibility of preparing the order.

### DeliveryTeam Class:
```python
class DeliveryTeam:
    def assign_delivery_boy(self):
        print("Assigning a delivery boy")
```
The `DeliveryTeam` class has a method `assign_delivery_boy()` responsible for assigning a delivery boy to handle the delivery. This class represents the responsibility of managing the delivery team.

### DeliveryBoy Class:
```python
class DeliveryBoy:
    def deliver_order(self):
        print("Delivering the order")
```
The `DeliveryBoy` class has a method `deliver_order()` responsible for picking up the order from the restaurant and delivering it to the customer. This class represents the responsibility of the delivery boy.

### ZomatoFacade Class:
```python
class ZomatoFacade:
    def __init__(self):
        self.restaurant = Restaurant()
        self.delivery_team = DeliveryTeam()
        self.delivery_boy = DeliveryBoy()

    def place_order(self):
        print("Placing the order")
        self.restaurant.prepare_order()
        self.delivery_team.assign_delivery_boy()
        self.delivery_boy.deliver_order()
```
The `ZomatoFacade` class acts as a facade and encapsulates the complexities of interacting with the `Restaurant`, `DeliveryTeam`, and `DeliveryBoy` classes. It has a method `place_order()` that provides a simple interface for placing an order. Behind the scenes, it coordinates the order preparation, delivery team assignment, and order delivery.

### Implementation:
```python
# Using the Facade to place an order
zomato_facade = ZomatoFacade()
zomato_facade.place_order()
```
In the implementation, a `ZomatoFacade` object is created, and the `place_order()` method is called. This single method call abstracts away the details of order processing, making it easy for clients to place an order without dealing with the complexities of the underlying classes.

### Explanation:
The Facade design pattern is evident in the `ZomatoFacade` class, which provides a simplified interface for placing an order. It encapsulates the interactions with the `Restaurant`, `DeliveryTeam`, and `DeliveryBoy` classes, allowing clients to perform a sequence of actions with a single method call.

### Benefits of Facade Design Pattern:
1. **Simplified Interface:** Clients interact with a single facade class, simplifying the usage of complex subsystems.
2. **Abstraction of Complexity:** The facade abstracts away the complexities of interacting with multiple classes, providing a higher-level interface.
3. **Encapsulation:** The details of subsystems are hidden from clients, promoting encapsulation and reducing dependencies.

### Conclusion:
The Facade design pattern is valuable when dealing with complex subsystems. In the provided example, the ZomatoFacade acts as an abstraction layer, simplifying the process of placing an order by coordinating the responsibilities of the `Restaurant`, `DeliveryTeam`, and `DeliveryBoy` classes. This promotes ease of use and maintainability in the codebase.
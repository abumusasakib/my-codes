# SOLID Principles

## Single Responsibility Principle (SRP):
The Single Responsibility Principle is one of the SOLID principles of object-oriented design, and it states that a class should have only one reason to change, meaning that a class should have only one responsibility.

### Scenario Explanation:
1. **Initial Scenario:**
   - You have a system where placing an order involves several steps, such as checking the validity of the request, verifying user funds, and increasing the order.
   - The responsibility for these actions is encapsulated in a single class or module.

2. **Introduction of Subscriptions:**
   - A new requirement is introduced, adding a subscription validation step before allowing the order placement.
   - This additional validation is being worked on by a separate team.

3. **Problem Due to Lack of SRP:**
   - Since the original class/module handles both order validation and order placement, the introduction of subscription validation causes a conflict.
   - Now, two different teams are working on different aspects of the same module, leading to potential conflicts, code complexity, and maintenance challenges.

4. **Solution Using SRP:**
   - If the Single Responsibility Principle had been followed:
     - There would be separate classes/modules for order validation, subscription validation and order placement.
     - The team working on subscription validation could extend the validation class without affecting the order placement class.

### Importance of SRP:
1. **Code Modularity:**
   - Following SRP leads to more modular code where each class has a clear and specific responsibility.
   - Changes in one area of the system do not impact unrelated areas.

2. **Easier Maintenance:**
   - When responsibilities are separated, maintaining and extending code becomes easier.
   - Teams can work on different aspects of the system independently.

3. **Reduced Code Complexity:**
   - Classes with a single responsibility are often simpler and easier to understand than those with multiple responsibilities.

4. **Enhanced Readability:**
   - Code becomes more readable and intuitive when each class has a clear purpose.

5. **Better Testability:**
   - Classes with single responsibilities are often more testable, as each unit of functionality can be tested in isolation.

### Conclusion:
The scenario emphasizes the significance of following SOLID principles, especially the Single Responsibility Principle, to build maintainable, scalable, and flexible software systems. By adhering to SRP, you create code that is easier to understand, extend, and adapt to changing requirements.


## Open/Closed Principle (OCP):
The Open/Closed Principle is one of the SOLID principles of object-oriented design. It states that a class should be open for extension but closed for modification. In simpler terms, you should be able to extend the behavior of a module without altering its source code.

### Scenario Explanation:
1. **Initial Scenario:**
   - You are tasked with writing code to display something on the screen based on the display type (e.g., TV or mobile).
   - You introduce checks for each display type (e.g., TV and mobile).

2. **Introduction of Target Space:**
   - A new requirement comes in, stating that the system should also support tablets as a display type.
   - To accommodate this, you need to modify the existing code by adding another check for tablet display.

3. **Problem Due to Violation of OCP:**
   - By adding checks for each display type directly in the existing code, you are violating the Open/Closed Principle.
   - If a new display type is introduced, you have to modify the existing code to accommodate it.

4. **Solution Using OCP:**
   - If the Open/Closed Principle had been followed:
     - You would have defined an interface or an abstract class for displaying content.
     - Separate classes would be created for each display type (TV, mobile, tablet), implementing the interface or extending the abstract class.
     - The existing code would only need to work with the interface or abstract class, and it would be open for extension without modification.

### Importance of OCP:
1. **Flexibility and Extensibility:**
   - Following OCP allows for easy extension of functionality without modifying existing code.
   - New functionality (new display types, in this case) can be added without altering the existing logic.

2. **Reduced Risk of Bugs:**
   - Modifying existing code introduces the risk of introducing bugs.
   - By adhering to OCP, you minimize the need for modifications, reducing the risk of unintended consequences.

3. **Clear Separation of Concerns:**
   - OCP encourages clear separation between existing code and new extensions.
   - Each module has a specific responsibility, making the codebase more modular and maintainable.

### Conclusion:
The violation of the Open/Closed Principle can lead to code that is resistant to change and challenging to maintain. Adhering to OCP by using interfaces, abstract classes, and creating extensible designs ensures that your code can gracefully accommodate new requirements and extensions without risking the stability of existing functionality.


## Liskov Substitution Principle (LSP):
The Liskov Substitution Principle is one of the SOLID principles of object-oriented design. It states that objects of a superclass should be able to be replaced with objects of a subclass without affecting the correctness of the program.

### Scenario Explanation:
1. **Inheritance Hierarchy:**
   - You have two shapes: `Rectangle` and `Square`.
   - You decide to model the relationship that every square is a rectangle by inheriting the `Square` class from the `Rectangle` class.

2. **Function that Modifies Rectangle:**
   - There is a function that takes a `Rectangle` object and modifies its width or height.

3. **Violation of LSP:**
   - When you inherit `Square` from `Rectangle`, you introduce an issue. While it's true that every square is a rectangle, the specific behavior of a square (where both width and height are the same) is not compatible with the general behavior of a rectangle (where width and height can be different).
   - If you attempt to pass a `Square` object to the function that modifies the rectangle, it breaks the intended behavior because setting the width or height of a square should maintain the square's property of equal sides.

4. **Solution Using LSP:**
   - To adhere to the Liskov Substitution Principle:
     - Consider creating a common base class or interface, such as `Shape`.
     - Derive both `Rectangle` and `Square` from the common base class.
     - The function should accept objects of the base class (`Shape`) instead of the derived classes (`Rectangle` or `Square`).

### Importance of LSP:
1. **Consistency and Predictability:**
   - Following LSP ensures that derived classes can be used interchangeably with base classes, maintaining consistency and predictability in the program.

2. **Preventing Unexpected Behavior:**
   - Violating LSP can lead to unexpected behavior when using derived class objects in place of base class objects.
   - In the described scenario, passing a `Square` to a function designed for a `Rectangle` breaks the expectations of how the function should behave.

3. **Flexibility and Extensibility:**
   - LSP promotes a design that allows for easy extension with new derived classes without affecting existing code that uses base class objects.

### Conclusion:
Adhering to the Liskov Substitution Principle helps in creating a robust and flexible object-oriented design. It ensures that derived classes can be used seamlessly in scenarios where base class objects are expected, promoting a consistent and reliable behavior throughout the program.

## Interface Segregation Principle (ISP):
The Interface Segregation Principle is one of the SOLID principles of object-oriented design. It states that a class should not be forced to implement interfaces it does not use. In other words, a class should not be forced to depend on methods it does not need.

### Scenario Explanation:
1. **Creation of UI Library:**
   - You are tasked with creating a UI library, and you define an interface named `Widget`.
   - The `Widget` interface has methods like `handleMouseClick` and `handleKeyboardInput`.

2. **Implementation in Button and TextBox:**
   - Classes `Button` and `TextBox` implement the `Widget` interface.
   - Both classes need to provide implementations for all methods declared in the `Widget` interface, including `handleMouseClick` and `handleKeyboardInput`.

3. **Violation of ISP:**
   - The issue arises because the `handleKeyboardInput` method might not make sense for certain UI elements like a `Button`.
   - However, due to the design of the single `Widget` interface, both `Button` and `TextBox` are forced to implement all methods, including the ones that may not be applicable.

4. **Solution Using ISP:**
   - To adhere to the Interface Segregation Principle:
     - Consider creating multiple interfaces, each focusing on a specific set of related methods.
     - In this case, you could have separate interfaces like `ClickableWidget` and `KeyboardInputWidget`.
     - The `Button` class can implement `ClickableWidget`, and the `TextBox` class can implement both `ClickableWidget` and `KeyboardInputWidget`.

### Importance of ISP:
1. **Avoiding Unnecessary Dependencies:**
   - Following ISP ensures that classes are not burdened with unnecessary method implementations, reducing dependencies and promoting a more modular design.

2. **Enhancing Readability and Maintenance:**
   - Classes become more readable and maintainable when they only implement interfaces that are relevant to their functionality.

3. **Flexibility and Extensibility:**
   - ISP allows for more flexibility when designing classes, as they can implement specific interfaces based on their needs.
   - It promotes a design that is open to extension without forcing unnecessary requirements on classes.

### Conclusion:
Adhering to the Interface Segregation Principle contributes to creating more focused and maintainable interfaces and classes. By avoiding unnecessary dependencies and allowing classes to implement only the interfaces they need, ISP promotes a design that is flexible, extensible, and easier to understand. This is beneficial not only for interviews but also for the practical aspects of software development.

## Dependency Inversion Principle (DIP):
The Dependency Inversion Principle is one of the SOLID principles of object-oriented design. It consists of two key points:
1. High-level modules should not depend on low-level modules. Both should depend on abstractions.
2. Abstractions should not depend on details. Details should depend on abstractions.

### Scenario Explanation:
1. **Notification Module Design:**
   - Initially, you design a notification module that sends email notifications and SMS notifications.
   - You have concrete classes like `EmailCenter` and `SMSCenter` to handle the low-level details of sending emails and SMS.

2. **Introduction of New Notification Types:**
   - The requirement evolves, and you need to introduce new notification types, such as WhatsApp notifications and push notifications.

3. **Violation of DIP:**
   - Initially, your high-level module (notification module) depends directly on low-level modules (`EmailCenter` and `SMSCenter`).
   - When new notification types are introduced, you find yourself needing to modify the high-level module, violating the open/closed principle.

4. **Solution Using DIP:**
   - To adhere to the Dependency Inversion Principle:
     - Introduce an abstraction layer, typically in the form of an interface (e.g., `NotificationSender` or `HighNotifier`).
     - The high-level module depends on this abstraction rather than on concrete low-level modules.
     - Implement specific notification senders (e.g., `EmailSender`, `SMSSender`) that adhere to the abstraction.

5. **Flexibility and Decoupling:**
   - With DIP, the high-level module is decoupled from the low-level details.
   - New notification types (WhatsApp, push notifications) can be added without modifying the high-level module. You only need to create new implementations of the `NotificationSender` interface.

### Code Structure:
```java
// High-level module
public interface NotificationSender {
    void sendNotification(String message);
}

// Low-level modules implementing the abstraction
public class EmailSender implements NotificationSender {
    // Implementation for sending email notifications
    // ...
}

public class SMSSender implements NotificationSender {
    // Implementation for sending SMS notifications
    // ...
}

// Usage in the Notification Module
public class NotificationModule {
    private final NotificationSender notificationSender;

    // Dependency injection of the abstraction
    public NotificationModule(NotificationSender notificationSender) {
        this.notificationSender = notificationSender;
    }

    public void sendNotification(String message) {
        // Delegating the notification sending to the abstraction
        notificationSender.sendNotification(message);
    }
}
```

### Benefits of DIP:
1. **Decoupling:**
   - High-level modules are not tightly coupled to low-level details. They depend on abstractions.

2. **Flexibility:**
   - Adding new notification types or modifying existing ones does not require changes to the high-level module.

3. **Testability:**
   - Easier to write unit tests, as dependencies can be easily mocked or replaced with alternative implementations.

4. **Maintainability:**
   - Changes to low-level modules do not impact the high-level module, promoting a more maintainable codebase.

### Conclusion:
By adhering to the Dependency Inversion Principle, you achieve a more flexible and maintainable design, allowing your system to evolve with changing requirements without causing extensive modifications to existing code. This is a crucial principle for creating scalable and adaptable software architectures.
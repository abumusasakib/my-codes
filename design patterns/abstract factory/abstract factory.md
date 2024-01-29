# Abstract Factory

Given below is the introduction of the Abstract Factory design pattern, highlighting its similarities and differences with the Factory design pattern.

1. **Factory Design Pattern Recap:**
   - Factory design pattern is a creational design pattern that helps in creating objects without specifying their exact classes.
   - It involves a factory class responsible for creating objects based on certain conditions (e.g., type).
   - The client informs the factory about the type of object it needs, and the factory handles the creation logic.

2. **Need for Abstract Factory Pattern:**
   - If the client wants objects from different categories or families (e.g., different brands of cars and bikes), the simple factory pattern might involve too many conditional blocks.
   - For example, creating a car from Toyota or Hyundai involves conditional logic, and this can become complex as more types and brands are added.

3. **Introduction of Abstract Factory Pattern:**
   - Abstract Factory Pattern is introduced to handle the creation of families of related or dependent objects.
   - It uses an abstract factory to create different factories, each responsible for creating objects within a specific family or category.

4. **Abstract Factory Pattern Workflow:**
   - Instead of directly creating objects (like in the Factory pattern), the Abstract Factory pattern creates families of objects.
   - The client communicates with an abstract factory, requesting a family of objects (e.g., cars and bikes).
   - The abstract factory, in turn, delegates the creation of individual objects to concrete factories (e.g., ToyotaFactory, HyundaiFactory).

5. **Example with Car and Bike Families:**
   - For example, the abstract factory might be a `VehicleFactory`, and concrete factories could be `ToyotaFactory` and `HyundaiFactory`.
   - The client interacts with the abstract factory, requesting a family of objects (e.g., cars and bikes).
   - The abstract factory (e.g., `VehicleFactory`) delegates the creation of cars and bikes to concrete factories (`ToyotaFactory`, `HyundaiFactory`).
   - Each concrete factory is responsible for creating objects (cars and bikes) of a specific family or brand.

6. **Advantages of Abstract Factory Pattern:**
   - The Abstract Factory pattern promotes a family of related object creation, ensuring that the created objects are compatible and work seamlessly together.
   - It allows for easy extension by adding new families of objects without modifying existing client code.

In summary, the Abstract Factory design pattern is an extension of the Factory design pattern, focusing on creating families of related objects. It provides a way to organize object creation in a more structured manner, particularly useful when dealing with multiple categories or families of objects.

# UML Diagram and Explanation

![UML Diagram of Abstract Factory 2](Keerti%20Purswani%20-%20Abstract%20Factory%20Design%20Pattern%20explained%20with%20CODE%20and%20real%20examples%20Compared%20with%20Factory%20DP!!✌️%20[17i8a-pUtx8%20-%20935x526%20-%205m08s].png)
            
Given below is the explanation of the Abstract Factory design pattern using an example related to software development, particularly in the context of creating GUI elements like buttons or text boxes:

1. **Client's Perspective:**
   - The client, in this case, is a developer working on the front end.
   - The client's task is to create GUI elements like buttons or text boxes for the application.

2. **Operating System Dependency:**
   - The client might be working on different operating systems (OS) such as Windows, Mac, Linux, etc.
   - However, when creating buttons or text boxes, the client does not want to explicitly specify the OS type for each GUI element.

3. **Introduction of GUI Factory:**
   - To handle the OS-specific details, the client creates a factory called `GUIFactory`.
   - The `GUIFactory` is responsible for creating various GUI elements, and its implementation can vary based on the underlying OS.

4. **Creating OS-Specific Factories:**
   - Depending on the OS type the client is working on (e.g., Mac or Windows), the client specifies whether it wants a `MacFactory` or a `WindowsFactory`.
   - The `MacFactory` and `WindowsFactory` are concrete factories that implement the creation of specific GUI elements for the respective OS.

5. **Client Interaction with the Factory:**
   - The client interacts only with the `GUIFactory` and does not need to worry about the underlying OS-specific details.
   - When the client wants a button, it calls `GUIFactory` to create a button.
   - Similarly, when the client wants a text box, it calls `GUIFactory` to create a text box.

6. **Decoupling Client and Implementation:**
   - The Abstract Factory pattern decouples the client code from the specific implementations for each OS.
   - The client does not need to know whether it's working on Mac or Windows; it relies on the factory to provide the appropriate GUI elements.

7. **Scalability and Flexibility:**
   - If the client needs to support additional GUI elements (e.g., radio buttons) or add support for a new OS, the changes are made within the factories.
   - The client remains unchanged, and new elements or OS-specific logic can be added to the factories without modifying existing client code.

8. **Advantages of Abstract Factory Pattern:**
   - The Abstract Factory pattern promotes scalability, flexibility, and maintainability by organizing the creation of families of related objects.
   - It allows for easy extension without modifying existing client code, making it suitable for scenarios where different families of objects need to be created.

In summary, the Abstract Factory pattern is used to create families of related objects (such as GUI elements for different OS types) in a way that abstracts the client from the details of implementation, providing a flexible and scalable solution.

# Client code

Given below is the description of the implementation of the Abstract Factory design pattern in C++, with the use of interfaces (`iFactory`, `iButton`, and `iTextBox`), and concrete factories (`MacFactory` and `WindowsFactory`).:

1. **Client Code:**
   - The client starts by asking the user for their machine's operating system (OS) type.
   - The client then uses this OS type to determine which GUI elements (buttons or text boxes) to create.

2. **Abstract Factory Interface (`iFactory`):**
   - An interface is defined for the factory (`iFactory`) that will create GUI elements.
   - The interface declares pure virtual functions for creating buttons (`createButton`) and text boxes (`createTextBox`).

3. **Button Interface (`iButton`):**
   - Another interface is defined for buttons (`iButton`), which declares a pure virtual function `press`.
   - Concrete button classes, such as `MacButton` and `WindowsButton`, inherit from this interface and implement the `press` function.

4. **Text Box Interface (`iTextBox`):**
   - Similarly, an interface for text boxes (`iTextBox`) is defined with a pure virtual function `showText`.
   - Concrete text box classes, such as `MacTextBox` and `WindowsTextBox`, inherit from this interface and implement the `showText` function.

5. **Concrete Factories (`MacFactory` and `WindowsFactory`):**
   - Concrete factory classes are created (`MacFactory` and `WindowsFactory`), both inheriting from the `iFactory` interface.
   - These classes implement the creation functions (`createButton` and `createTextBox`), returning concrete button and text box instances based on the OS type.

6. **Abstract Factory (`GUIAbstractFactory`):**
   - An abstract factory class (`GUIAbstractFactory`) is defined with a static function `createFactory`.
   - This function takes an OS type as a parameter and returns a concrete factory instance based on the OS type (either `MacFactory` or `WindowsFactory`).

7. **Client's Use of Abstract Factory:**
   - The client uses the abstract factory (`GUIAbstractFactory`) to create a factory instance based on the user's OS type.
   - The client then uses this factory to create buttons and text boxes without worrying about the specific OS details.

8. **Default Factory Handling:**
   - The abstract factory includes a default case in the conditional statement. If the OS type is neither "windows" nor "mac," it defaults to creating a `MacFactory`.

This implementation demonstrates the use of the Abstract Factory pattern, where the client interacts with abstract interfaces (`iFactory`, `iButton`, and `iTextBox`), and concrete factories and products are created without revealing the underlying OS-specific details to the client. The pattern ensures that the client code remains decoupled from specific implementations, promoting flexibility and ease of maintenance.
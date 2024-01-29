# Design Patterns

* We are expected to write **reliable**, **scalable** and **highly maintainable** code using OOP principles
* There are some **templates** that are **proven** and **tested** which help to solve common problems such as:
	* Create classes
	* Instantiatiing classes
	* Structuring classes together
	* How do the classes interact
* These templates are used during software development and interviews
* Design patterns are reusable solution
	* They are language dependent (as long as there is OOP)
* We are expected to know some of the commonly used design patterns
* There are three types of design patterns mentioned below:

## **Creational Design Patterns:** 
* These pattern are involved with creating and instantiating classes.
### *Factory:* 
* Makes the creation logic separate from the actual code in a factory (a decoupling is done here)
* If any changes are to be made, then it can be done in the factory (in the library side), without touching the client code
* The client code doesn't need to know the inner details, it is like an interface
* This pattern makes the codebase easily maintainable
### *Abstract Factory:*
* Very similar to factory design pattern
* Abstract Factory Pattern is introduced to handle the creation of families of related or dependent objects.
* It uses an abstract factory to create different factories, each responsible for creating objects within a specific family or category.
* Instead of directly creating objects (like in the Factory pattern), the Abstract Factory pattern creates families of objects.
* The client communicates with an abstract factory, requesting a family of objects (e.g., cars and bikes).
* The abstract factory, in turn, delegates the creation of individual objects to concrete factories
* The Abstract Factory pattern promotes a family of related object creation, ensuring that the created objects are compatible and work seamlessly together.
* It allows for easy extension by adding new families of objects without modifying existing client code.
* UML Diagram for Abstract Factory:

![UML Diagram of Abstract Factory](Keerti%20Purswani%20-%20Abstract%20Factory%20Design%20Pattern%20explained%20with%20CODE%20and%20real%20examples%20Compared%20with%20Factory%20DP!!✌️%20[17i8a-pUtx8%20-%20935x526%20-%204m27s].png)

Given below is the description of the UML Diagram:

1. **Client Interaction in Factory Design Pattern:**
   - In the Factory design pattern, the client interacts directly with a factory to create objects (e.g., cars or bikes).
   - The client specifies the type of object it wants (e.g., car or bike), and the factory handles the creation details.

2. **Introduction of Abstract Factory Design Pattern:**
   - In the Abstract Factory design pattern, an additional layer is introduced between the client and the factory.
   - The client interacts with an abstract factory, requesting a family of related objects rather than individual objects.
   - The abstract factory, in turn, delegates the creation of specific objects to concrete factories.

3. **Example with Vehicle, Hyundai, and Toyota Factories:**
   - The client communicates with a `VehicleFactory` to create a car and a bike.
   - Instead of specifying whether it wants a Hyundai car, Toyota car, Hyundai bike, or Toyota bike directly, the client informs the `VehicleFactory` of its intention to create a family of objects.
   - Depending on the client's request, the `VehicleFactory` creates either a `HyundaiFactory` or a `ToyotaFactory`.
   - The concrete factory (e.g., `HyundaiFactory`) is responsible for creating specific objects within its family, such as a Hyundai car or a Hyundai bike.

4. **Purpose of the Additional Layer:**
   - The additional layer (the abstract factory) adds a level of abstraction, allowing the client to request families of objects without specifying the individual types.
   - This abstraction decouples the client from the details of object creation, making the client code more flexible and less dependent on specific implementations.

5. **Advantages of Abstract Factory Pattern:**
   - The Abstract Factory pattern provides a way to organize the creation of families of related objects.
   - It enables easy extension by introducing new families of objects without modifying existing client code.
   - The abstraction layer promotes a clear separation of concerns, making the system more modular and adaptable to changes.

In summary, the Abstract Factory design pattern adds a layer of abstraction by introducing an abstract factory, which delegates the creation of specific objects to concrete factories. This extra layer enhances flexibility and maintainability in scenarios where families of related objects need to be created.

![UML Diagram of Abstract Factory 2](Keerti%20Purswani%20-%20Abstract%20Factory%20Design%20Pattern%20explained%20with%20CODE%20and%20real%20examples%20Compared%20with%20Factory%20DP!!✌️%20[17i8a-pUtx8%20-%20935x526%20-%205m08s].png)

Given below is the description of the Abstract Factory pattern implementation:

1. **GUI Abstract Factory (`GUIAbstractFactory`):**
   - This is an abstract class that includes a static function `createFactory`.
   - The client informs this factory about the OS type it is working with.
   - Based on the OS type, it decides whether to create a `MacFactory` or a `WindowsFactory`.
   - This abstract factory acts as a higher-level creator, deciding which family of products (buttons and text boxes) to produce.

2. **Concrete Factories (`MacFactory` and `WindowsFactory`):**
   - Concrete classes that implement the `iFactory` interface.
   - Each concrete factory is responsible for creating a family of products (either Mac-specific or Windows-specific).
   - These factories provide implementations for creating concrete buttons and text boxes.

3. **Client Interaction:**
   - The client starts by determining the OS type it is working with.
   - The client then uses the `GUIAbstractFactory` to create a factory (`iFactory`) without worrying about the specific OS details.
   - The client informs the abstract factory about the OS type using the `createFactory` function.

4. **Factory Creation:**
   - The `createFactory` function in `GUIAbstractFactory` decides which concrete factory to instantiate based on the provided OS type.
   - If the OS type is "mac," it creates an instance of `MacFactory`; if it's "windows," it creates an instance of `WindowsFactory`.
   - The abstract factory ensures that the client does not have to be aware of the specific details of the concrete factories.

5. **Product Creation:**
   - Once the client has the concrete factory, it can use it to create specific products, such as buttons and text boxes.
   - The client calls the `createButton` and `createTextBox` functions on the factory.

In summary, the Abstract Factory pattern introduces an additional layer of abstraction by having an abstract factory (`GUIAbstractFactory`) that creates concrete factories (`MacFactory` or `WindowsFactory`). The concrete factories, in turn, create families of related products (buttons and text boxes). This structure allows for flexibility and scalability, as the client can work with different families of products without being concerned about the specific OS type or product details.
        
### *Singleton:*
* Making sure that there is only one instance of a class
* For example: it can be used to ensure that only one logger or configuration manager is being used in a project
* Steps to follow to make singleton:\
		1. Restrict users from creating object of class (by making constructor private)\
		2. Make only one static instance within the library code which will be returned\
        3. Make a static function which checks this condition: if instance already not created, create, store and return it, otherwise return the already stored instance

* Make sure that only one instance can be made while in a multi-threading case as well
	* It can be done by incorporating the aspect that if one thread is making an instance, the other threads won't be able to

* There may be different ways to call the default constructor
	* We would need to make the copy constructor and operator= overloading private
### *Builder:*
* Whenever we are building a very complex object with lots of configurations in it, we use this design pattern
* Two important things to keep in mind:\
		1. Complex Object\
		2. Configurations
* We mainly use this pattern when an object is made up of several objects.
* UML diagram of builder design pattern:

![UML diagram of Builder Design pattern](Keerti%20Purswani%20-%20Builder%20Design%20Pattern%20explained%20in%20Detail%20with%20Code,%20Real%20Life%20Examples%20and%20Applications!%20[MrrrtQT_8SE%20-%20935x526%20-%204m27s].png)

* The UML Diagram discusses the Builder Design Pattern, and it's outlining the key components involved in the pattern.

1. **Product:**
    - The product in this case is a "desktop." This represents the complex object that the builder pattern aims to create. The desktop will have various components like a monitor, keyboard, etc.

2. **Builder Interface:**
    - There is a "desktop builder" which is an interface or abstract class. This interface defines a set of functions that must be implemented by concrete builders. The functions in this interface might include things like `buildMonitor()`, `buildKeyboard()`, etc. The desktop builder is responsible for specifying the steps to construct the product.

3. **Concrete Builders:**
    - There are two concrete builders: `DellDesktopBuilder` and `HPDesktopBuilder`. These are classes that implement the functions specified in the desktop builder interface. Each concrete builder is responsible for building a specific type of desktop (Dell or HP) with its own configurations for the monitor, keyboard, and other components.

4. **Director:**
     - The director is a component that coordinates the construction process. It dictates the order in which the steps specified by the builder interface should be executed. When building a house, the civil engineer serves as the director, providing instructions on how to proceed step by step. In the context of building a desktop, the person overseeing the construction of the desktop is considered the director.

The director doesn't necessarily have to be a separate class; sometimes, it can be integrated with the client code or the user of the builder pattern. The director guides the construction process by instructing the concrete builders on the steps to follow.

The overall purpose of the Builder Design Pattern is to separate the construction of a complex object from its representation, allowing the same construction process to create different representations. This is particularly useful when dealing with complex objects that may have different configurations. The pattern promotes flexibility and modularity in the construction process.

* Summary of Builder Design:

1. **Builder Design Pattern:**
   The Builder pattern is a creational design pattern that separates the construction of a complex object from its representation. It allows the same construction process to create different representations of the object.

2. **Client, Director, and Builder:**
   - **Client:** Refers to the entity or code that wants to create a complex object.
   - **Director:** Coordinates the construction process using a builder. However, as mentioned, the director is optional. In some cases, the client itself might take on the role of the director.
   - **Builder:** Defines the steps to construct a complex object. It provides an interface for building different parts of the object.

3. **Simplifying Object Construction:**
   The goal of the Builder pattern is to make the construction of a complex object simple for the client. Instead of the client dealing with the details of constructing each part of the object, it delegates this responsibility to a builder.

4. **Keeping Concerns Separate:**
   It is suggested to keep concerns separate. This means separating the construction logic (handled by the builder) from the client code. The client doesn't need to know how to build each part of the object; it just needs to provide a builder and instruct the director (if used) to construct the object.

5. **Alternative Approach:**
   Instead of having the client act as the director and builder, the concerns are kept even more separate by having a dedicated director. This director is responsible for coordinating the construction of the complex object.

6. **Example:**
   The complex object being constructed is a "desktop." The client provides a builder, and the director (or client itself) instructs the builder to construct the desktop. The director takes care of the details of how to build the desktop, and the client gets the fully constructed object.

In summary, the Builder pattern is used to simplify the construction of complex objects by delegating the construction process to a builder. The director (optional) coordinates the construction, and the client specifies the builder and receives the final object without dealing with the construction details.

## **Structural Design Patterns:** 
* These patterns deal with organizing classes into different forms and make a single structure, and support a certain functionality.
### Bridge: 
* Decouples an abstraction from its implementation, allowing them to vary independently.
### *Adaptive:*
* Makes incompatible objects interact with each other
* The Adapter Design Pattern is a structural pattern that allows the interface of an existing class to be used as another interface. It is often used to make existing classes work with others without modifying their source code.

Let's break down the components of the Adapter pattern in this context:

1. **Client:** The client in this scenario is your laptop or mobile device that comes with a specific charger designed for a particular plug layout.

2. **Adaptee:** The existing object that needs to be adapted is the charger. The charger's plug layout is incompatible with the plug points in Europe.

3. **Target:** The target is the interface that the client expects to work with. In this case, it's the European plug point.

4. **Adapter:** The adapter is the middleman that bridges the gap between the client and the adaptee. It allows the client to use the adaptee by providing a wrapper around it that adheres to the target interface.

5. **Adapter Pattern Implementation:**
   - You have an existing charger (adaptee) that doesn't directly work with European plug points (target).
   - An adapter is introduced (adapter) that has the European plug layout on one side and the original charger plug layout on the other side.
   - The client plugs the charger into the adapter, and the adapter into the European plug point.
   - The adapter translates the request from the client (plugging in the charger) to a format that the adaptee (charger) understands.

6. **Real-World Analogy:**
   - Analogous to using a physical adapter for electrical devices, the Adapter pattern helps in making two incompatible interfaces work together.
   - For example, a USB to Ethernet adapter allows a device with a USB interface to connect to a network through an Ethernet port.

In summary, the Adapter Design Pattern is used to make two incompatible interfaces work together by introducing a wrapper (adapter) that translates the requests from the client into a format that the existing object (adaptee) can understand. It's a practical solution for scenarios where you want to reuse existing code or objects in a different context with a different interface.
* Diagram of Adapter Design Pattern

![Diagram of Adapter Design Pattern](Keerti%20Purswani%20-%20Adapter%20Design%20Pattern%20Explanation%20with%20Code%20in%20Easy%20Way!%20✌🏻%20[JxveJ1pI5fc%20-%20935x526%20-%203m37s].png)

* Suppose we want to analyze an XML data using a certain data analytics tool
* But this tool only accepts data in JSON format
* One way to solve this issue is to use an Adapter between the tool and the XML data which would make them compatible with each other

* In the scenario above, there is an analytics tool that expects data in JSON format, but the actual data is in XML format. To bridge this gap and enable the tool to analyze the XML data without modifying the tool itself, we can use the Adapter Design Pattern.

1. **Client (Analytics Tool):** This is the tool that expects data in JSON format for analysis.

2. **Adaptee (XML Data):** The existing data you have is in XML format, and it is not compatible with the client (tool) interface.

3. **Target (JSON Data):** The target is the interface that the client (tool) expects, which is JSON data in this case.

4. **Adapter:** The adapter is the component that sits between the client and the adaptee. Its role is to convert the XML data into JSON format so that the client can seamlessly work with it.

5. **Adapter Pattern Implementation:**
   - You create an adapter that implements the target interface (JSON data) expected by the client.
   - The adapter internally encapsulates an instance of the adaptee (XML data).
   - When the client makes a request to analyze the data, the adapter translates this request into a format that the adaptee can understand (convert XML to JSON).
   - The adapter then forwards this request to the adaptee and returns the result to the client, making it appear as if the client is interacting with JSON data directly.

6. **Real-World Analogy:**
   - Analogous to using a physical adapter to connect devices with different plug types, the Adapter pattern allows two incompatible interfaces to work together.
   - The adapter acts as a bridge, ensuring that the client can interact with the adaptee without being aware of the underlying conversion process.

7. **Benefits:**
   - The main advantage of using the Adapter pattern in this context is that you can integrate the analytics tool seamlessly without modifying its code.
   - The client can continue to work with JSON data, and the adapter takes care of the data conversion.

In summary, the Adapter Design Pattern is employed to enable communication between two incompatible interfaces by introducing an adapter that translates requests from the client into a format that the adaptee can understand. This allows the client to interact with the adaptee seamlessly, even when they have different interfaces or expectations.
    
### **Composite:** 
* Composes objects into tree structures to represent part-whole hierarchies.

### *Facade:*

#### Overview:

- **Type:** Structural Design Pattern
- **Intent:** Provide a unified interface to a set of interfaces in a subsystem, making it easier to use and understand.

#### Explanation:

1. **Scenario: Working with a Complex Library:**
   - Often, when working with third-party libraries or subsystems, the library might be extensive and complex.
   - Users might not need the entirety of the library's functionalities; instead, they might require a simplified way to interact with specific features.

2. **Facade Pattern as a Helper:**
   - The Facade design pattern acts as a simplified, higher-level interface or wrapper around a set of interfaces in the subsystem or library.
   - Rather than interacting directly with the complex library, users interact with a facade, which encapsulates and simplifies the interactions.

3. **Unified Interface:**
   - The Facade provides a unified interface, hiding the complexities of the underlying subsystem.
   - Users can perform common tasks through the facade without needing to understand the intricacies of the subsystem's internal workings.

4. **Example: Image Processing Library:**
   - Imagine a complex image processing library with functionalities for resizing, cropping, applying filters, etc.
   - Instead of exposing all these functionalities directly to the client, a facade can be created, providing simple methods like `resizeImage()`, `cropImage()`, etc.
   - Clients can use the facade without having to navigate the detailed and complex functionalities of the entire image processing library.

5. **Benefits:**
   - **Simplicity:** Clients interact with a simplified interface, making it easier to understand and use.
   - **Decoupling:** Facade helps in decoupling the client code from the detailed implementation of the subsystem, promoting a more modular design.
   - **Maintenance:** If the underlying subsystem changes, only the facade needs to be updated, preventing changes from propagating throughout the codebase.

6. **Components of the Facade Pattern:**
   - **Facade Class:** Provides a simple, high-level interface to the client. It delegates calls to the appropriate methods in the subsystem.
   - **Subsystem Classes:** The complex library or subsystem containing various components and functionalities.
   - **Client:** The code that interacts with the facade rather than the subsystem directly.

#### Example UML Diagram:

```
    Client          Facade        Subsystem
      |                |               |
 ------|----------------|---------------|------
 |    |                |               |     |
 |    |   <<use>>      |               |     |
 |    |--------------->|               |     |
 |                     |               |     |
 |                     |               |     |
 |                     |               |     |
 |                     |               |     |
 |                     |               |     |
 |                     |               |     |
 |                     |               |     |
 |    |                |               |     |
 ------|----------------|---------------|------
```

- **Client:** Interacts with the facade.
- **Facade:** Provides a simplified interface to the client and delegates calls to the subsystem.
- **Subsystem:** The complex library or subsystem with its various components.

#### Conclusion:

The Facade design pattern is useful when dealing with complex subsystems or libraries, providing a simplified interface to clients. It promotes simplicity, modularity, and easy maintenance in software design.

* UML Diagram for Facade Design Pattern:

![UML DIagram of Facade Design Pattern](Daily%20Code%20Buffer%20-%20Facade%20Design%20Pattern%20in%20detail%20Interview%20Question%20[k86uJ3uPtug%20-%20935x526%20-%202m05s].png)

#### Scenario:

Suppose you have a complex video encoder library that provides a wide range of functionalities. However, for your specific application, you only need a simple functionality: uploading a video and encoding it in HD. The full-fledged video encoder library might be more complex than what you require, and using it directly could be cumbersome.

#### Solution of Scenario:

To simplify the usage of the video encoder library and abstract away unnecessary complexities, you can apply the Facade design pattern. Here's how it works:

1. **Create Abstraction Layer:**
- Develop an abstraction layer or interface on top of the video encoder library.
- This abstraction layer defines a simple and high-level interface that is tailored to the specific needs of your application.

2. **Facade Interface:**
- Within the abstraction layer, create a facade interface or class, such as `VideoProcessor`.
- This facade class encapsulates the interactions with the video encoder library and exposes only the functionalities relevant to your application.

3. **Define Simple Interface:**
- Include methods in the facade interface that directly correspond to the actions you need, like `encodeVideo(file)` for encoding a video in HD.
- This simple interface hides the complexities of the underlying video encoder library.

4. **Internal Implementation:**
- Internally, the facade class uses the functionalities of the video encoder library to implement the simple interface it exposes.
- It acts as a mediator, handling the details of interacting with the complex library.

#### Benefits of Facade Design Pattern:

1. **Simplified Usage:**
- Clients of your application interact with the facade (`VideoProcessor`) without needing to understand the intricate details of the video encoder library.

2. **Reduced Complexity:**
- The facade hides the complexity of the underlying library, making it easier for developers to work with and reducing the learning curve.

3. **Abstraction:**
- The facade provides an abstraction layer that isolates your application from changes in the video encoder library. If the library changes, only the facade needs to be updated.

4. **Reduced Friction:**
- Facade design pattern reduces friction when working with third-party libraries by providing a simplified and tailored interface.

#### Example UML Diagram of Scenario:

```
Client          VideoProcessor        VideoEncoder Library
  |                |                          |
------|----------------|--------------------------|------
|    |                |                          |     |
|    |   <<use>>      |                          |     |
|    |--------------->|                          |     |
|                     |                          |     |
|                     |                          |     |
|                     |                          |     |
|                     |                          |     |
|                     |                          |     |
|    |                |                          |     |
------|----------------|--------------------------|------
```

- **Client:** Interacts with the `VideoProcessor` facade.
- **VideoProcessor (Facade):** Provides a simplified interface to the client and internally interacts with the `VideoEncoder Library`.
- **VideoEncoder Library (Subsystem):** The complex library with various functionalities.

#### Overall Conclusion:

The Facade design pattern is a valuable tool when dealing with complex libraries or subsystems. It simplifies the usage of a library by providing a tailored interface, making it more straightforward for developers to work with and reducing the impact of changes in the underlying library.

## **Behavioural Design Patterns:** 
* These patterns deal with the interaction between classes, how they will communicate with each other
### Interpreter: 
* Defines a grammar for interpreting the sentences in a language and provides an interpreter to evaluate those sentences.
### *Strategy:*
- The **Strategy Design Pattern** is a behavioral design pattern that allows you to define a family of algorithms, encapsulate each one of them, and make them interchangeable. It lets the algorithm vary independently from the clients that use it.
- Diagram of Strategy Design Pattern:

![Diagram of Strategy Design Pattern](Daily%20Code%20Buffer%20-%20Strategy%20Design%20Pattern%20in%20detail%20Interview%20Question%20[xcMJUtWbFZU%20-%202m37s].jpg)

- In the context of the navigation app example:

    - **Problem Scenario:**
      - You have different types of vehicles (car, bike, public transport).
      - Each vehicle requires a different algorithm to determine the optimal route from a source to a destination.
    
    - **Solution Using Strategy Pattern:**
      - Instead of hard-coding if-else conditions based on the type of vehicle, you define separate algorithms (strategies) for each type of vehicle.
      - You encapsulate these algorithms in separate strategy classes (CarStrategy, BikeStrategy, PublicTransportStrategy).
      - The context class (NavigationApp) has a reference to a strategy interface (RouteStrategy), and you can dynamically set the strategy based on the selected vehicle.
      - When a user wants to find a route, the context class delegates the route determination to the selected strategy, providing flexibility and easy interchangeability of algorithms.

    This approach adheres to the Open/Closed Principle, making it easier to add new vehicle types or change the behavior of existing ones without modifying the client code.
    
![Diagram of Strategy Design Pattern](Daily%20Code%20Buffer%20-%20Strategy%20Design%20Pattern%20in%20detail%20Interview%20Question%20[xcMJUtWbFZU%20-%20935x526%20-%205m41s].png)
    
Given below is an overview of the **Strategy Design Pattern** implementation:

- **Objective of the Strategy Design Pattern:**
  - To define a family of algorithms, encapsulate each one of them, and make them interchangeable. Strategy lets the algorithm vary independently from the clients that use it.

- **Components of the Implementation:**
  - **Strategy Interface (`OperationStrategy`):**
    - Defines a common interface for various algorithms.
    - Contains a method (`doOperation`) that takes two numbers and performs a specific operation.

  - **Concrete Strategy Classes (`AddStrategy`, `SubtractStrategy`, `MultiplyStrategy`):**
    - Implement the `OperationStrategy` interface.
    - Provide specific implementations for the `doOperation` method, representing different algorithms (addition, subtraction, multiplication).

  - **Context Class (`CalculatorContext`):**
    - Holds a reference to a strategy (`OperationStrategy`).
    - Provides a method (`executeStrategy`) that takes two numbers and delegates the operation to the current strategy.

- **Client Code:**
  - Creates instances of the context (`CalculatorContext`) with different strategies (addition, subtraction, multiplication).
  - Calls the `executeStrategy` method on each context instance with specific numbers.

- **Advantages of the Strategy Design Pattern:**
  - **Flexibility:**
    - Easily swap algorithms at runtime without modifying the client code.
  - **Encapsulation:**
    - Each algorithm is encapsulated in its own class, promoting better code organization.
  - **Separation of Concerns:**
    - Algorithms are decoupled from the client, promoting better maintainability.

- **Use Cases:**
  - When you have a family of related algorithms and want to make them interchangeable.
  - When you want to avoid using conditional statements (`if-else`) to select an algorithm.

- **Conclusion:**
  - The Strategy Design Pattern provides a clean and flexible way to manage algorithms in a system, making it easy to extend and maintain. It promotes encapsulation, separation of concerns, and supports the "open/closed" principle, allowing new algorithms to be added without modifying existing code.
### *Observer:*
* One of the easier design patterns
* This pattern mainly solves the problem of sending updates (from publisher) to multiple components (subscribers) simultaneously
    * As like MQTT
* An example is getting group message notification on multiple devices
* UML diagram of Observer design pattern:

![UML Diagram of Observer](Keerti%20Purswani%20-%20Observer%20Design%20Pattern%20explained%20in%20EASY%20way%20with%20CODE%20and%20Real%20Examples!!%20✌️%20[gbTWHeGUeXs%20-%20935x526%20-%203m19s].png)
* The Observer pattern allows a subject to maintain a list of dependents (observers or subscribers) and notify them of any state changes.
* Subscribers (users) implement a common interface (`ISubscriber`) with a `notify` function, allowing them to respond to changes.
* This diagram describes the Observer design pattern. 

1. **Observer Design Pattern:**
   - **Subject:** The subject is an object that maintains a list of dependents, known as observers, and notifies them of any state changes.
   - **Observer:** Observers are objects that are interested in the state of the subject. They register with the subject to receive updates when the subject's state changes.
   - **Register/Subscribe and Unsubscribe:** Observers can be added (subscribed) or removed (unsubscribed) from the list of observers maintained by the subject. This allows dynamic addition or removal of observers.
   - **Notify:** When the state of the subject changes, it notifies (or broadcasts to) all registered observers. Observers, in turn, take appropriate actions based on the change.

2. **Actions of Subject and Observers:**
   - **Subject's Role:** The subject is responsible for managing the list of observers, notifying them of changes, and providing a mechanism for observers to register or unregister.
   - **Observer's Role:** Observers simply react to the changes in the subject. They don't need to know the details of how the subject's state has changed; they just respond accordingly.

3. **Example Actions:**
   - Observers might take some actions when notified, such as sending emails, SMS, or push notifications.
   - Each observer can define its specific behavior in response to the subject's state change. For instance, an observer handling email notifications would send an email, while an observer handling SMS notifications would send an SMS.

4. **Use of Observer Pattern:**
   - The Observer pattern is particularly useful when you have a one-to-many relationship between objects, and the state changes in one object need to be reflected in multiple other objects without them being tightly coupled.
   - It allows for a flexible and loosely coupled design, where the subject and observers can evolve independently.

In summary, the Observer pattern facilitates a communication mechanism between a subject and its observers. The subject maintains a list of observers, notifies them of changes, and observers respond in a way that is specific to their individual responsibilities. This pattern is commonly used to implement distributed event handling systems.
# Builder Pattern Overview

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

# Desktop Builder

Given below is the explanation of the implementation of a desktop builder class in the context of the Builder Design Pattern:

### 1. Desktop Builder Class:

The `DesktopBuilder` class is part of the Builder Design Pattern and serves as an abstract base class or interface for building desktops. It includes the following elements:

#### 1.1 Product (Desktop) in the Protected Section:

```cpp
protected:
    Desktop desktop;
```

- The `Desktop` class is the product being built, and it's placed in the protected section of the `DesktopBuilder` class. This is because the product needs to be accessed and modified by concrete builders that inherit from this class.

#### 1.2 Constructor Initialization:

```cpp
DesktopBuilder() {
    desktop = Desktop(); // Initialize the desktop product when a builder is created.
}
```

- In the constructor of the `DesktopBuilder` class, the desktop product is initialized. Note that this creates a simple desktop with default values; none of the parts have been configured yet.

#### 1.3 Pure Virtual Functions:

```cpp
virtual void buildMonitor() = 0;
virtual void buildKeyboard() = 0;
virtual void buildMouse() = 0;
virtual void buildSpeaker() = 0;
virtual void buildRAM() = 0;
virtual void buildProcessor() = 0;
virtual void buildMotherboard() = 0;
```

- The class includes pure virtual functions for building various components of the desktop. These functions must be implemented by concrete builders (e.g., `DellDesktopBuilder` and `HPDesktopBuilder`). Each concrete builder is responsible for providing the specific details for building its type of desktop.

#### 1.4 Getter Function for the Product:

```cpp
virtual Desktop* getDesktop() {
    return &desktop;
}
```

- A virtual getter function is provided to retrieve the built desktop product. This allows access to the desktop product after the construction process is complete. Note that the return type is a pointer to a `Desktop` object.

### 2. Remarks on Getters:

It is discussed where to place the getter functions (`getDesktop`)—either in the `DesktopBuilder` base class or in the concrete builders. It is suggested to place the getter in the base class because both `DellDesktopBuilder` and `HPDesktopBuilder` produce the same type of product (`Desktop`). However, it also to be acknowledged that in other scenarios where concrete builders may produce different types of products, placing getters in concrete builders might be more appropriate.

### 3. Virtual Functions and Flexibility:

The use of virtual functions allows flexibility in the implementation. Concrete builders must implement these functions, allowing for variations in the construction process for different types of desktops.

In summary, the `DesktopBuilder` class provides a blueprint for building desktops, including the product (desktop) and a set of functions that concrete builders must implement to configure the various components of the desktop.

# Dell Desktop Builder

Given below is the explanation of the implementation of the `DellDesktopBuilder` class, which is a concrete builder inheriting from the `DesktopBuilder` base class in the context of the Builder Design Pattern:

### 1. Including the Necessary Header Files:

```cpp
#include "dellDesktopBuilder.h"
```

This line includes the header file for the `DellDesktopBuilder` class. It's good practice to include the necessary headers to ensure that the compiler has access to the class definitions.

### 2. Inheriting from `DesktopBuilder`:

```cpp
class DellDesktopBuilder : public DesktopBuilder {
```

Here, the `DellDesktopBuilder` class is defined to inherit publicly from the `DesktopBuilder` class. This means that `DellDesktopBuilder` inherits the interface and functionality specified in `DesktopBuilder`.

### 3. Implementing the Functions:

```cpp
void DellDesktopBuilder::buildMonitor() {
    desktop->setMonitor("Dell Monitor");
}

// Other similar functions for building different components...
```

The `DellDesktopBuilder` class provides concrete implementations for the virtual functions declared in the `DesktopBuilder` class. Each function is responsible for setting a specific component of the desktop.

### 4. Configuration in Real Life:

In a real-world scenario, the functions in `DellDesktopBuilder` would not simply set strings but would involve actual configuration. For example:

```cpp
void DellDesktopBuilder::buildMonitor() {
    // Actual code to configure and build a Dell monitor
    // For example: monitor->setBrand("Dell"), monitor->setSize(27), etc.
}
```

In this way, the concrete builders play a crucial role in configuring and building specific components based on the requirements of the product.

### 5. Passing Strings for Simplicity:

For simplicity in the example, the functions in the `DellDesktopBuilder` class are shown simply setting strings to represent the configuration. In a real-world scenario, these would involve more complex logic to configure and build the actual components.


In summary, the `DellDesktopBuilder` class serves as a concrete builder, implementing the specific steps needed to build a Dell desktop. The focus is on demonstrating the configuration process for each component, which can involve more than just setting strings in a real-world scenario.

# Desktop Director

Given below is the discussion of the implementation of the `DesktopDirector` class, which is a part of the Builder Design Pattern. It orchestrates the construction process by using the provided `DesktopBuilder` to build each component of the desktop.

### 1. Including the Necessary Header Files:

```cpp
#include "desktopDirector.h"
```

This line includes the header file for the `DesktopDirector` class. It's a good practice to include the necessary headers to ensure that the compiler has access to the class definitions.

### 2. Adding the Builder Member:

```cpp
class DesktopDirector {
private:
    DesktopBuilder* builder;
```

In the private section of the class, a member variable `builder` is declared. This member is of type `DesktopBuilder*`, meaning it's a pointer to a `DesktopBuilder` object. The `DesktopDirector` will use this builder to construct the product.

### 3. Constructor:

```cpp
public:
    DesktopDirector(DesktopBuilder* pDesktopBuilder) : builder(pDesktopBuilder) {}
```

The constructor of `DesktopDirector` takes a `DesktopBuilder` pointer as a parameter and initializes the `builder` member with the provided builder.

### 4. Build Desktop Function:

```cpp
public:
    Desktop* buildDesktop() {
        builder->buildMonitor();
        builder->buildKeyboard();
        builder->buildMouse();
        builder->buildSpeaker();
        builder->buildRam();
        builder->buildProcessor();
        builder->buildMotherboard(); // Assuming this function exists in DesktopBuilder

        return builder->getDesktop();
    }
```

This function, `buildDesktop()`, represents the main functionality of the `DesktopDirector`. It guides the building process by calling the appropriate functions on the `builder` object to construct each component of the desktop. Finally, it returns the built desktop using the `getDesktop` function of the `DesktopBuilder`.

### 5. Additional Notes:

- The `DesktopDirector` serves as a director in the Builder Design Pattern. Its purpose is to guide the construction process by using a builder.

- The director is separate from the builder, allowing for flexibility and reusability. Different builders can be used with the same director to create different variations of the product.

- The `DesktopDirector` does not need to know the specific type of builder it receives. It uses the builder's interface to guide the construction process.

- Some implementations might choose to have a separate getter function to retrieve the built product, while others might directly return the product from the build function. Both approaches are valid, and the choice depends on the design preferences.

In summary, the `DesktopDirector` class orchestrates the construction process by using the provided `DesktopBuilder` to build each component of the desktop. It abstracts the construction details, promoting a separation of concerns in the building process.

# Client

Given below is the discussion of the client code that uses the Builder Design Pattern to construct two different types of desktops (HP desktop and Dell desktop) using two different directors (`DesktopDirector1` and `DesktopDirector2`). Let's break down the key points mentioned:

### 1. Including Necessary Header Files:

```cpp
#include "hpDesktopBuilder.h"
#include "dellDesktopBuilder.h"
#include "desktopDirector.h"
```

These lines include the necessary header files for the HP desktop builder, Dell desktop builder, and the desktop director.

### 2. Creating HP Desktop Builder:

```cpp
HPDesktopBuilder hpDesktopBuilder;
```

An instance of the `HPDesktopBuilder` class is created. This builder is specialized for building HP desktops.

### 3. Creating Dell Desktop Builder:

```cpp
DellDesktopBuilder dellDesktopBuilder;
```

Similarly, an instance of the `DellDesktopBuilder` class is created. This builder is specialized for building Dell desktops.

### 4. Creating Desktop Directors:

```cpp
DesktopDirector1 director1(&hpDesktopBuilder);
DesktopDirector2 director2(&dellDesktopBuilder);
```

Two instances of `DesktopDirector` are created, each associated with a specific desktop builder. `DesktopDirector1` is associated with the HP desktop builder, and `DesktopDirector2` is associated with the Dell desktop builder.

### 5. Building Desktops:

```cpp
Desktop desktop1 = director1.buildDesktop();
Desktop desktop2 = director2.buildDesktop();
```

The directors (`director1` and `director2`) use their associated builders to build desktops. The `buildDesktop` function is called on each director, and it returns a built desktop.

### 6. Showing Specifications:

```cpp
director1.showSpecs(desktop1);
director2.showSpecs(desktop2);
```

The `showSpecs` function is called on each director to display the specifications of the desktop that was built. This function presumably prints or logs the specifications of the desktop.

### 7. Notes:

- The client code demonstrates the ease of use of the Builder Design Pattern. The client doesn't need to worry about the details of building desktops; it simply uses the appropriate director and builder to create the desired product.

- The client code doesn't directly interact with the product or the builder. Instead, it relies on the director to orchestrate the construction process.

- The use of different builders allows for the creation of different products (HP desktop and Dell desktop) with varying specifications.

- The directors encapsulate the construction process, making it easy for clients to create different variations of the product without knowing the intricate details of the building process.

In summary, the client code demonstrates how the Builder Design Pattern facilitates the construction of complex objects with different configurations by using directors and specialized builders. The client's code remains clean and focused on high-level logic, while the directors and builders handle the details of the construction process.

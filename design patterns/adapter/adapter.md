# Adapter Design Pattern

The Adapter Design Pattern is a structural pattern that allows the interface of an existing class to be used as another interface. It is often used to make existing classes work with others without modifying their source code.

## Code
Here is the break down of the code step by step:

1. **XMLData Class:**
   - This class represents data in XML format.
   - It has a private member `xmlData` to store the XML data.
   - The constructor initializes the `xmlData` member.
   - There's a public member function `getXMLData` that returns the XML data.

2. **DataAnalyticsTool Class:**
   - This class represents a data analytics tool that expects data in JSON format.
   - It has a private member `jsonData` to store the JSON data.
   - The constructor initializes the `jsonData` member.
   - It has a public member function `analyzeData` that outputs an analysis statement.

3. **Client Class:**
   - This class represents a client that processes data.
   - It has a public member function `processData` that takes a `DataAnalyticsTool` object as a parameter and calls its `analyzeData` function.

4. **Adapter Class (Adapter Design Pattern):**
   - The `Adapter` class is derived from `DataAnalyticsTool`. This establishes an inheritance relationship, making it a subtype of `DataAnalyticsTool`. This is the key to the Adapter pattern.
   - The Adapter class has a private member `xmlData` of type `XMLData`.
   - The constructor of the `Adapter` class takes an `XMLData` object and initializes its `xmlData` member.
   - The `analyzeData` function is overridden in the `Adapter` class. In this overridden function:
      - It outputs a statement that it is converting XML data to JSON data.
      - It calls the `getXMLData` function from `xmlData` to get the XML data and outputs it.
      - It performs the analysis on the converted JSON data.

5. **Main Function:**
   - Objects of `XMLData`, `DataAnalyticsTool`, and `Client` classes are created.
   - A `Client` object processes data using a `DataAnalyticsTool` object.
   - The challenge arises because the `DataAnalyticsTool` expects JSON data, and we have XML data. To address this, an `Adapter` object is created.
   - The `Adapter` object is created with an `XMLData` object (containing XML data).
   - The `Client` processes data using the `Adapter` object, which internally uses the `XMLData` and adapts it to the `DataAnalyticsTool` interface.

This is a typical implementation of the Adapter Design Pattern where an adapter is used to make two incompatible interfaces work together. In this case, the `XMLData` (adaptee) is adapted to the interface expected by `DataAnalyticsTool` (target) using the `Adapter` class.

## UML Diagram and Explanation of Adapter Design Pattern

![UML Diagram of Adapter Design Pattern](Keerti%20Purswani%20-%20Adapter%20Design%20Pattern%20Explanation%20with%20Code%20in%20Easy%20Way!%20✌🏻%20[JxveJ1pI5fc%20-%20935x526%20-%2015m08s].png)

Here is the explanation of the class diagram and code:

### Class Diagram:

1. **Client:**
   - Represents the client that interacts with the target.
   - Initiates a request to the target.

2. **Target (DataAnalyticsTool):**
   - Represents the interface or class that the client wants to use.
   - Defines the operation that the client uses (e.g., `analyzeData`).

3. **Adapter:**
   - Implements the Target interface.
   - Contains an instance of the Adaptee (XMLData).
   - Overrides the `analyzeData` function to adapt the Adaptee and make it compatible with the Target.
   - Here, Adapter is inheriting from Target (DataAnalyticsTool).

4. **Adaptee (XMLData):**
   - Represents the class or interface that is incompatible with the Target.
   - It's the class that needs adaptation to work with the Target.
   - In this case, it contains XML data.

### Explanation:

- **Composition Relationship:**
   - Here, the Adapter class contains an instance of the Adaptee (XMLData). This is known as a composition relationship.
   - The Adapter class uses the `XMLData` object to adapt it to the `DataAnalyticsTool` interface.

- **Inheritance Relationship:**
   - The Adapter class inherits from the Target (DataAnalyticsTool). This is an example of inheritance.
   - By inheriting from the Target, the Adapter class can be used wherever the Target is expected.

- **Object Adapter Pattern:**
   - The provided code uses the composition relationship to achieve the Adapter pattern. It's known as the Object Adapter Pattern.
   - Object Adapter Pattern involves holding an instance of the Adaptee in the Adapter class.

- **Class Adapter Pattern:**
   - There is another approach called Class Adapter Pattern, which involves using multiple inheritance.
   - In this pattern, the Adapter class inherits from both the Target and the Adaptee.
   - While C++ supports multiple inheritance, the Object Adapter Pattern is only used here.

### Conclusion:

- The Adapter pattern is used to make incompatible interfaces work together.
- Composition (Object Adapter Pattern) and Inheritance (Class Adapter Pattern) are two ways to achieve the Adapter pattern.
- The choice between Object Adapter and Class Adapter depends on language support and design preferences.

The Object Adapter Pattern is used with composition, where the Adapter class contains an instance of the Adaptee (XMLData) and inherits from the Target (DataAnalyticsTool). The adaptation is done by overriding the `analyzeData` function in the Adapter class.
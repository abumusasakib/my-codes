# Strategy Design Pattern

![UML Diagram of Strategy Design Pattern](Daily%20Code%20Buffer%20-%20Strategy%20Design%20Pattern%20in%20detail%20Interview%20Question%20[xcMJUtWbFZU%20-%20935x526%20-%205m41s].png)

In the context of the **Strategy Design Pattern** using a simple calculator example:

- **Problem Scenario:**
  - You want to implement a calculator that performs various operations such as addition, subtraction, multiplication, etc.
  - Each operation represents a different strategy, and you want to make these strategies interchangeable.

- **Solution Using Strategy Pattern:**
  - You start by defining a strategy interface, let's say `OperationStrategy`, which declares a method `doAction` for performing the operation.

    ```java
    // OperationStrategy.java
    public interface OperationStrategy {
        int doAction(int num1, int num2);
    }
    ```

  - Then, you create concrete classes for each operation, implementing the `OperationStrategy` interface.

    ```java
    // AddStrategy.java
    public class AddStrategy implements OperationStrategy {
        @Override
        public int doAction(int num1, int num2) {
            return num1 + num2;
        }
    }

    // SubtractStrategy.java
    public class SubtractStrategy implements OperationStrategy {
        @Override
        public int doAction(int num1, int num2) {
            return num1 - num2;
        }
    }
    ```

  - Next, you have a context class, let's say `CalculatorContext`, that holds a reference to the current strategy (`OperationStrategy`). The client can set a strategy for the context.

    ```java
    // CalculatorContext.java
    public class CalculatorContext {
        private OperationStrategy strategy;

        public void setStrategy(OperationStrategy strategy) {
            this.strategy = strategy;
        }

        public int executeStrategy(int num1, int num2) {
            return strategy.doAction(num1, num2);
        }
    }
    ```

  - Finally, in your main application or client code, you create an instance of the context and set the desired strategy dynamically.

    ```java
    // Main.java
    public class Main {
        public static void main(String[] args) {
            CalculatorContext calculator = new CalculatorContext();

            // Set addition strategy
            calculator.setStrategy(new AddStrategy());
            int result = calculator.executeStrategy(5, 3);
            System.out.println("Addition result: " + result);

            // Set subtraction strategy
            calculator.setStrategy(new SubtractStrategy());
            result = calculator.executeStrategy(5, 3);
            System.out.println("Subtraction result: " + result);
        }
    }
    ```

  - This approach allows you to easily switch between different strategies (operations) without modifying the client code, providing flexibility and maintainability.
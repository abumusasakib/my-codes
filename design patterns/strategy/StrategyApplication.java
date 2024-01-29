// StrategyApplication.java
/*
 *  References: https://www.tutorialspoint.com/design_pattern/strategy_pattern.htm
 *              https://refactoring.guru/design-patterns/strategy
 */
public class StrategyApplication {
    public static void main(String[] args) {
        // Set addition strategy
        Context context = new Context(new OperationAdd());
        int result = context.executeStrategy(10, 5);
        System.out.println("Addition result: 10 + 5 =  " + result);

        // Set subtraction strategy
        context = new Context(new OperationSubtract());
        result = context.executeStrategy(10, 5);
        System.out.println("Subtraction result: 10 - 5 =  " + result);

        // Set multiplication strategy
        context = new Context(new OperationMultiply());
        result = context.executeStrategy(10, 5);
        System.out.println("Multiplication result: 10 * 5 =  " + result);
    }
}

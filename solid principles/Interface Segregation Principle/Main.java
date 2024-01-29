// In this `main` function:

// - We create instances of `Button` and `TextBox`.
// - We call the `handleMouseClick` method, which is specific to the `ClickableWidget` interface.
// - For the `TextBox` instance, we also check if it implements the `KeyboardInputWidget` interface.
// If it does, we call the `handleKeyboardInput` method, which is specific to the `KeyboardInputWidget` interface.

// This adheres to the Interface Segregation Principle (ISP), as each class is now
// implementing interfaces specific to the functionality it needs, and no class is
// forced to implement unnecessary methods.
public class Main {

    public static void main(String[] args) {
        // Creating instances of Button and TextBox
        ClickableWidget button = new Button();
        ClickableWidget textBox = new TextBox();

        // Calling methods specific to ClickableWidget
        button.handleMouseClick();
        textBox.handleMouseClick();

        // Checking if the instance also implements KeyboardInputWidget
        if (textBox instanceof KeyboardInputWidget) {
            // If so, call the method specific to KeyboardInputWidget
            ((KeyboardInputWidget) textBox).handleKeyboardInput();
        }
    }
}

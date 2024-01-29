// Class TextBox implementing both ClickableWidget and KeyboardInputWidget
// `TextBox` implements both `ClickableWidget` and `KeyboardInputWidget`, allowing it to handle
// both mouse clicks and keyboard input.
public class TextBox implements ClickableWidget, KeyboardInputWidget {
    @Override
    public void handleMouseClick() {
        System.out.println("TextBox clicked");
        // TextBox-specific logic for mouse click...
    }

    @Override
    public void handleKeyboardInput() {
        System.out.println("Keyboard input received in TextBox");
        // TextBox-specific logic for keyboard input...
    }
}
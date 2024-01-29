// Class Button implementing ClickableWidget
// `Button` only implements the `ClickableWidget` interface, as it doesn't require keyboard input handling.
public class Button implements ClickableWidget {
    @Override
    public void handleMouseClick() {
        System.out.println("Button clicked");
        // Button-specific logic...
    }
}
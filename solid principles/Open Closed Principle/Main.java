// This design follows the Open/Closed Principle by defining an interface (`Display`) and
// creating separate classes for each display type. The existing code (`DisplayController`)
// works with the `Display` interface, and new display types can be added without modifying the existing code.

// Step 1: Define an interface for displaying content
interface Display {
    void showContent();
}

// Step 2: Implement separate classes for each display type

class TVDisplay implements Display {
    @Override
    public void showContent() {
        System.out.println("Displaying content on TV.");
    }
}

class MobileDisplay implements Display {
    @Override
    public void showContent() {
        System.out.println("Displaying content on mobile.");
    }
}

class TabletDisplay implements Display {
    @Override
    public void showContent() {
        System.out.println("Displaying content on tablet.");
    }
}

// Step 3: Modify the existing code to work with the interface

class DisplayController {
    private final Display display;

    public DisplayController(Display display) {
        this.display = display;
    }

    public void displayContent() {
        // The existing code works with the Display interface
        display.showContent();
    }
}

// Step 4: Usage of the classes

public class Main {
    public static void main(String[] args) {
        // Usage without modifying existing code
        DisplayController tvController = new DisplayController(new TVDisplay());
        tvController.displayContent();

        DisplayController mobileController = new DisplayController(new MobileDisplay());
        mobileController.displayContent();

        DisplayController tabletController = new DisplayController(new TabletDisplay());
        tabletController.displayContent();
    }
}

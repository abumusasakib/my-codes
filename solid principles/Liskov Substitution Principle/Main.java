// In this implementation:

// - Both `Rectangle` and `Square` implement the `Shape` interface.
// - The `ShapeModifier` class has a method `modifyShape` that accepts any object implementing the `Shape` interface.
// - The `main` function demonstrates creating instances of `Rectangle` and `Square`, then modifying them using the
//    `modifyShape` function, and displaying the area of the common `Shape` interface.

// Common base interface
interface Shape {
    void setDimensions(int width, int height);
    int calculateArea();
}


// Rectangle class implementing the Shape interface
class Rectangle implements Shape {
    protected int width;
    protected int height;

    @Override
    public void setDimensions(int width, int height) {
        // Set width and height for the rectangle
        this.width = width;
        this.height = height;
    }

    @Override
    public int calculateArea() {
        return width * height;
    }
}


// Square class also implementing the Shape interface
class Square implements Shape {
    protected int side;

    @Override
    public void setDimensions(int width, int height) {
        // Enforce that setting dimensions for a square maintains its square property
        this.side = Math.min(width, height);
    }

    @Override
    public int calculateArea() {
        return side * side;
    }
}

// Function that accepts any object implementing the Shape interface
class ShapeModifier {
    public static void modifyShape(Shape shape, int newWidth, int newHeight) {
        shape.setDimensions(newWidth, newHeight);
    }
}

// Main class for demonstration
public class Main {
    public static void main(String[] args) {
        // Create instances of Rectangle and Square
        Rectangle rectangle = new Rectangle();
        Square square = new Square();

        // Modify Rectangle using the function
        ShapeModifier.modifyShape(rectangle, 5, 10);
        System.out.println("Rectangle Area: " + rectangle.calculateArea());

        // Modify Square using the function
        ShapeModifier.modifyShape(square, 4, 5);
        System.out.println("Square Area: " + square.calculateArea());
    }
}

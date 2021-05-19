package ArithmeticOperators;

import java.util.Scanner;

public class Problem14 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        double length, width;
        System.out.print("Enter length of rectangle: ");
        length = scan.nextDouble();
        System.out.print("Enter width of rectangle: ");
        width = scan.nextDouble();
        
        double area, perimeter;
        area = length * width;
        perimeter = 2 * (length + width);
        
        System.out.println("");
        System.out.println("Area of rectangle: "+area+" units");
        System.out.println("Perimeter of rectangle: "+perimeter+" units2");
    }
}

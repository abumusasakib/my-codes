package ArithmeticOperators;

import java.util.Scanner;

public class Problem13 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        float radius, area, perimeter;
        float pi = 3.1416f;
        
        System.out.print("Enter radius of circle: ");
        radius = scan.nextFloat();
        
        area = pi * radius * radius;
        perimeter = 2 * pi * radius;
        
        System.out.println("");
        System.out.println("Area: "+area+" units");
        System.out.println("Perimeter: "+perimeter+" units");
    }
}

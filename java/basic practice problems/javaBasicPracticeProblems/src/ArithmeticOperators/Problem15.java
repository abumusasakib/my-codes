package ArithmeticOperators;

import java.util.Scanner;

public class Problem15 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        double height, base;
        System.out.print("Enter height of triangle: ");
        height = scan.nextDouble();
        System.out.print("Enter base of triangle: ");
        base = scan.nextDouble();
        
        double area;
        area = ((double)1 / 2) * base * height;
        
        System.out.println("Area of triangle: "+area+" units");
    }
}

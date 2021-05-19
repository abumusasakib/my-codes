package ArithmeticOperators;

import java.util.Scanner;

public class Problem25 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        double a, b, c, x;
        System.out.print("Enter the value of a: ");
        a = scan.nextDouble();
        System.out.print("Enter the value of b: ");
        b = scan.nextDouble();
        System.out.print("Enter the value of c: ");
        c = scan.nextDouble();
        
        x = (-b + Math.sqrt(Math.abs(b*b - 4*a*c))) / (2*a);
        
        System.out.println("The value of x is: "+x);
    }
}

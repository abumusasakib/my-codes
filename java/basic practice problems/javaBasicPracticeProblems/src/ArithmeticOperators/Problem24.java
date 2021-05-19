package ArithmeticOperators;

import java.util.Scanner;

public class Problem24 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        double a, b, c;
        System.out.print("Enter the value of b: ");
        b = scan.nextDouble();
        System.out.print("Enter the value of c: ");
        c = scan.nextDouble();
        
        a = (Math.sqrt(Math.abs(b))) + (c * c);
        
        System.out.println("The value of a is: "+a);
    }
}

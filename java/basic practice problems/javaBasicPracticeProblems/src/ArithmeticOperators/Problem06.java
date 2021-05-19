package ArithmeticOperators;

import java.util.Scanner;

public class Problem06 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int a, b;
        System.out.print("Enter a value of first integer: ");
        a = scan.nextInt();
        System.out.print("Enter a value of second integer: ");
        b = scan.nextInt();
        
        int sum, diff, product;
        sum = a + b;
        diff = a - b;
        product = a * b;
        
        float quotient;
        quotient = (float)a / b;
        
        int remainder;
        remainder = a % b;
        
        System.out.println("");
        System.out.println("Sum is: "+sum);
        System.out.println("Difference is: "+diff);
        System.out.println("Product is: "+product);
        System.out.println("Quotient is: "+quotient);
        System.out.println("Remainder is: "+remainder);
    }
}

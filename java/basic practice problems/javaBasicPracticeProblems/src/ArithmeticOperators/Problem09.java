package ArithmeticOperators;

import java.util.Scanner;

public class Problem09 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int num1, num2, thirdVariable;
        System.out.print("Enter the value of first variable: ");
        num1 = scan.nextInt();
        System.out.print("Enter the value of second variable: ");
        num2 = scan.nextInt();
        
        System.out.println("");
        System.out.println("Before swapping: ");
        System.out.println("First variable, num1: "+num1);
        System.out.println("Second variable, num2: "+num2);
        
        thirdVariable = num1;
        num1 = num2;
        num2 = thirdVariable;
        
        System.out.println("");
        System.out.println("After swapping: ");
        System.out.println("First variable, num1: "+num1);
        System.out.println("Second variable, num2: "+num2);
    }
}

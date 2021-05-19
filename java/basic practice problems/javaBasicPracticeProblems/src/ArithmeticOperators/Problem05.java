package ArithmeticOperators;

import java.util.Scanner;

public class Problem05 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int a;
        System.out.print("Enter value of a: ");
        a = scan.nextInt();
        System.out.println("You entered: "+a);
        
        float b;
        System.out.print("Enter value for b: ");
        b = scan.nextFloat();
        System.out.println("You entered: "+b);
        
        char c;
        System.out.print("Enter a character: ");
        c = scan.next().charAt(0);
        System.out.println("You entered: "+c);
    }
}

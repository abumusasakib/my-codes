
package ArithmeticOperators;

import java.util.Scanner;

public class Problem08 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int a,b,c;
        System.out.print("Enter the value of a: ");
        a = scan.nextInt();
        System.out.print("Enter the value of b: ");
        b = scan.nextInt();
        System.out.print("Enter the value of c: ");
        c = scan.nextInt();
        
        double result;
        result = a * (b - c) + 1.37;
        
        System.out.println("");
        System.out.println("The result is: "+result);
    }
}

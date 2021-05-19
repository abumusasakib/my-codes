package IfAndSwitch;

import java.util.Scanner;

public class Problem34
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        double a, b, c, d;
        
        System.out.print("Enter the value of a: ");
        a = scan.nextDouble();
        System.out.print("Enter the value of b: ");
        b = scan.nextDouble();
        System.out.print("Enter the value of c: ");
        c = scan.nextDouble();
        
        d = (b*b) - 4*a*c;
        
        if(d == 0)
        {
            double x = (-b) / (2*a);
            System.out.println("The root is: "+x);
        }
        else if(d > 0)
        {
            double x1 = (-b+Math.sqrt(d)) / (2*a);
            double x2 = (-b-Math.sqrt(d)) / (2*a);
            System.out.println("The roots are: "+x1+" and "+x2);
        }
        else
        {
            double realPart = (-b) / (2*a);
            double imaginaryPart = (Math.sqrt(Math.abs(d))) / (2*a);
            System.out.println("The roots are: "+realPart+"+"+imaginaryPart+"i and "+realPart+"-"+imaginaryPart+"i");
        }
    }
}

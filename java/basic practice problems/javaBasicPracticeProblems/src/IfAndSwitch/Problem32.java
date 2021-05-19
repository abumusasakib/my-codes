package IfAndSwitch;

import java.util.Scanner;

public class Problem32 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        float num1, num2, num3;
        System.out.print("Enter 1st number: ");
        num1 = scan.nextFloat();
        System.out.print("Enter 2nd number: ");
        num2 = scan.nextFloat();
        System.out.print("Enter 3rd number: ");
        num3 = scan.nextFloat();
        
        if(num1 > num2 && num1 > num3)
        {
            System.out.println("Largest number: "+num1);
        }
        else if(num2 > num1 && num2 > num3)
        {
            System.out.println("Largest number: "+num2);
        }
        else
        {
            System.out.println("Largest number: "+num3);
        }
        
        if(num1 < num2 && num1 < num3)
        {
            System.out.println("Smallest number: "+num1);
        }
        else if(num2 < num1 && num2 < num3)
        {
            System.out.println("Smallest number: "+num2);
        }
        else
        {
            System.out.println("Smallest number: "+num3);
        } 
    }
}

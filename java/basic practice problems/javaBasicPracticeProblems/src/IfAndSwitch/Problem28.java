package IfAndSwitch;

import java.util.Scanner;

public class Problem28 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int num;
        System.out.print("Enter a number: ");
        num = scan.nextInt();
        
        if(num % 2 == 0)
        {
            System.out.println("The number is divisible by 2");
        }
        else if (num % 3 == 0)
        {
            System.out.println("The number is divisible by 3");
        } 
        else if (num % 5 == 0)
        {
            System.out.println("The number is divisible by 5");
        } 
        else if (num % 7 == 0)
        {
            System.out.println("The number is divisible by 7");
        } 
        else if (num % 10 == 0)
        {
            System.out.println("The number is divisible by 10");
        } 
        else
        {
            System.out.println("Not divisible by any numbers 2, 3, 5, 7, 10");
        }
    }
}

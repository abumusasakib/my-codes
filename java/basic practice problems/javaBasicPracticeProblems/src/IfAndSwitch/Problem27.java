package IfAndSwitch;

import java.util.Scanner;

public class Problem27 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int num;
        System.out.print("Enter a number: ");
        num = scan.nextInt();
        
        if(num % 2 == 0)
        {
            System.out.println("The number is even");
        }
        
        else
        {
            System.out.println("The number is odd");
        }
    }
}

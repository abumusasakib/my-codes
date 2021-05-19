package LoopLevel2;

import java.util.Scanner;

public class Problem50 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int num;
        System.out.print("Enter a number: ");
        num = scan.nextInt();
        
        boolean isPrime = true;
        
        for(int i = 2; i < num;i++)
        {
            if(num % i == 0)
            {
                isPrime = false;
            }
        }
        
        if(isPrime == true)
        {
            System.out.println("The number is prime");
        }
        else
        {
            System.out.println("The number is not prime");
        }
        
        
    }
}

package LoopLevel2;

import java.util.Scanner;

public class Problem67
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int n;
        System.out.print("Enter number of terms, n: ");
        n = scan.nextInt();
        
        int fib1 = 0, fib2 = 1, fibSum = 0;
        
        System.out.print("The fibonacci series: ");
        
        if(n <= 1)
        {
            System.out.print(fib1);
        }
        else if(n <= 2)
        {
            System.out.print(fib1+", "+fib2);
        }
        else
        {
            System.out.print(fib1+", "+fib2+", ");
        }
                
        for(int i = 3; i <= n; i++)
        {
            fibSum = fib1 + fib2;
            
            if(i != n)
            {
                System.out.print(fibSum+", ");
            }
            else
            {
                System.out.print(fibSum);
            }
            
            fib1 = fib2;
            fib2 = fibSum;
        }
        
        System.out.println("");
    }
}

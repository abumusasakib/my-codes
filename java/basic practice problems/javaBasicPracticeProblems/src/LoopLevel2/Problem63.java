package LoopLevel2;

import java.util.Scanner;

public class Problem63
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int n;
        System.out.print("Enter a number: ");
        n = scan.nextInt();
        
        int sum = 0, lastDigit;
        while(n != 0)
        {
            lastDigit = n % 10;
            sum = sum + lastDigit;
            n = n / 10;
        }
            
        System.out.println("The sum of the digits is: "+sum);
    }        
}

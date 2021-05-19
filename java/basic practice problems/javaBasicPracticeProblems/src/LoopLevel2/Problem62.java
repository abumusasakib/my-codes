package LoopLevel2;

import java.util.Scanner;

public class Problem62 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int n;
        System.out.print("Enter a number: ");
        n = scan.nextInt();
        
        int revNum = 0, originalNum = n, lastDigit;
        while(n != 0)
        {
            lastDigit = n % 10;
            revNum = revNum * 10 + lastDigit;
            n = n / 10;
        }
        
        if(originalNum == revNum)
        {
            System.out.println("The number is a palindrome");
        }
        else
        {
            System.out.println("The number is not a palindrome");
        }
    }    
}

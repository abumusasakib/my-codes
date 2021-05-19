package LoopLevel2;

import java.util.Scanner;

public class Problem61 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int n;
        System.out.print("Enter a number: ");
        n = scan.nextInt();
        
        int revNum = 0, lastDigit;
        while(n != 0)
        {
            lastDigit = n % 10;
            revNum = revNum * 10 + lastDigit;
            n = n / 10;
        }
            
        System.out.println("The reversed number is: "+revNum);
    }    
}

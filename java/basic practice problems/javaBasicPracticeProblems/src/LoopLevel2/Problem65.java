package LoopLevel2;

import java.util.Scanner;

public class Problem65
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int n;
        System.out.print("Enter a number: ");
        n = scan.nextInt();
        
        int sum = 0, lastDigit, originalNum = n;
        while(n != 0)
        {
            lastDigit = n % 10;
            sum = sum + (lastDigit*lastDigit*lastDigit);
            n = n / 10;
        }
        
        if(sum == originalNum)
        {
            System.out.println("The number is Armstrong");
        }
        else
        {
            System.out.println("The number is not Armstrong");
        }
    }        
}

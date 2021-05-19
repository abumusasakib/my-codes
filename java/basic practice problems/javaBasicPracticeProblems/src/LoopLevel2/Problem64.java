package LoopLevel2;

import java.util.Scanner;

public class Problem64 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int num;
        System.out.print("Enter a number: ");
        num = scan.nextInt();
        
        int sum = 0;
        
        for(int i = 1; i < num;i++)
        {
            if(num % i == 0)
            {
                sum = sum + i;
            }
        }
        
        if(sum == num)
        {
            System.out.println("The number is perfect");
        }
        else
        {
            System.out.println("The number is not perfect");
        }
    }    
}

package LoopLevel3;

import java.util.Scanner;

public class Problem69 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int num1, num2, start, end;
        System.out.print("Enter 1st number: ");
        num1 = scan.nextInt();
        System.out.print("Enter 2nd number: ");
        num2 = scan.nextInt();
        
        if(num1 <= num2)
        {
            start = num1;
            end = num2;
        }
        else
        {
            start = num2;
            end = num1;
        }
        
        if(start % 2 == 0)
        {
            start++;
        }
        
        for(int i = start; i <= end; i++)
        {
            if(i % 2 != 0)
            {
                 System.out.print(i+" ");
            }
        }
        
        System.out.println("");
    }
}

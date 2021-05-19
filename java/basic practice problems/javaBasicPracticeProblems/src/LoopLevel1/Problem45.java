package LoopLevel1;

import java.util.Scanner;

public class Problem45
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
        
        for(int i = start; i <= end; i++)
            {
                System.out.print(i);
            
                if(i != end)
                {
                    System.out.print(",");
                }
                else
                {
                    System.out.print("");
                }
            }
        
        System.out.println("");
    }        
}

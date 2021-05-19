package LoopLevel1;

import java.util.Scanner;

public class Problem46 
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
        
        int quotient = start / 2;
        int remainder = start - (2*quotient);
        
        if(remainder == 0)
        {
            start++;
        }
        
        for(int i = start; i <= end; i+=2)
        {
            System.out.print(i+" ");
        }
        
        System.out.println("");
    }      
}

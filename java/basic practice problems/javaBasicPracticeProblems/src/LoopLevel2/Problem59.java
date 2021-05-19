package LoopLevel2;

import java.util.Scanner;

public class Problem59 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        float x, result = 1;
        int y;
        
        System.out.print("Enter base, x: ");
        x = scan.nextFloat();
        System.out.print("Enter exponent, y: ");
        y = scan.nextInt();
        
        for(int i = 1; i <= y; i++)
        {
            result = result * x;
        }
        
        System.out.println("The result is: "+result);
    }
}

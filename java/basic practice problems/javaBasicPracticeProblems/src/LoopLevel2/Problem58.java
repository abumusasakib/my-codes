package LoopLevel2;

import java.util.Scanner;

public class Problem58 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        float inputs, sum = 0, avg = 0;
        
        for(int i = 1; i <= 10; i++)
        {
            System.out.print("Enter floating point numbers: ");
            inputs = scan.nextFloat();
            
            sum = sum + inputs;
        }
        
        avg = sum / 10;
        System.out.println("The average is: "+avg);
    }
}

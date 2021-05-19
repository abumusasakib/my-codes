package LoopLevel2;

import java.util.Scanner;

public class Problem49
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        float inputs, largest = 0.0f, smallest = 9999999.0f;
        
        for(int i = 1; i <= 10; i++)
        {
            System.out.print("Enter floating point numbers: ");
            inputs = scan.nextFloat();
            
            if(inputs > largest)
            {
                largest = inputs;
            }
            
            if(inputs < smallest)
            {
                smallest = inputs;
            }
        }
        
        System.out.println("The largest number is: "+largest);
        System.out.println("The smallest number is: "+smallest);
    }
}

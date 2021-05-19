package LoopLevel3;

import java.util.Scanner;

public class Problem68
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        float inputs, largest = 0.0f, smallest = 9999999.0f, sum = 0.0f, avg = 0.0f;
        String output = "";
        
        for(int i = 1; i <= 10; i++)
        {
            System.out.print("Enter floating point numbers: ");
            inputs = scan.nextFloat();
            
            if(i != 10)
            {
                output = output + inputs + ", ";
            }
            else
            {
                output = output + Float.toString(inputs);
            }
            
            if(inputs > largest)
            {
                largest = inputs;
            }
            
            if(inputs < smallest)
            {
                smallest = inputs;
            }
            
            sum = sum + inputs;
        }
        
        System.out.println(output);
        
        System.out.println("The largest number is: "+largest);
        System.out.println("The smallest number is: "+smallest);
        
        avg = sum / 10;
        System.out.println("The average value is: "+avg);
    }
}

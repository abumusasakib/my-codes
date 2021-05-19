package LoopLevel3;

import java.util.Random;
import java.util.Scanner;

public class Problem72
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        
        float n, inputs, largest = 0.0f, smallest = 9999999.0f, sum = 0.0f, avg = 0.0f;
        String output = "";
        
        System.out.print("Enter number of random numbers, n: ");
        n = scan.nextFloat();
        
        for(int i = 1; i <= n; i++)
        {
            inputs = rand.nextFloat();
            
            output = output + inputs + " ";
            
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
        
        avg = sum / n;
        System.out.println("The average value is: "+avg);    
    }
}

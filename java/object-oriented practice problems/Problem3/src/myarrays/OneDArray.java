package myarrays;

import java.util.Random;
import java.util.Scanner;

public class OneDArray 
{
    private int[] values; 
    private float average;
    
    public OneDArray()
    {
        values =  null;
        average = 0.0f;
    }
    
    public void setArray()
    {
        Scanner sc = new Scanner(System.in);
        int length, sum = 0;
        System.out.print("How many numbers: ");
        length = sc.nextInt();
        
        values = new int[length];
        
        for(int i = 0; i < values.length; i++)
        {
            System.out.print("Enter values: ");
            values[i] = sc.nextInt();
            sum += values[i];
        }
        
        average = (float) sum / values.length;        
    }
    
    public void setArray(int length)
    {
        Random rand = new Random();
        int sum = 0;
        
        values = new int[length];
        
        for(int i = 0; i < values.length; i++)
        {
            values[i] = rand.nextInt();
            sum += values[i];
        }
        
        average = (float) sum / values.length;        
    }
    
    public void showArray()
    {
        for(int i = 0; i < values.length; i++)
        {
            System.out.print("{");
            if(i != values.length)
            {
                System.out.print(values[i] + ", ");
            }
            else
            {
                System.out.print(values[i] + "}");
                System.out.println("Avg: " + average);
            }
            
            
        }
    }
    
}

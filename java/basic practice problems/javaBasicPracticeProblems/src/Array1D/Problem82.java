package Array1D;

import java.util.Random;
import java.util.Scanner;

public class Problem82
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        
        int arr[] = new int[100];
        int largest = 0, smallest = 9999999; 
        float sum = 0.0f, avg = 0.0f;
        
        for(int i = 0; i < 100; i++)
        {
            arr[i] = rand.nextInt();
            System.out.print(arr[i]+" ");
            
            
            if(arr[i] > largest)
            {
                largest = arr[i];
            }
            
            if(arr[i] < smallest)
            {
                smallest = arr[i];
            }
            
            sum = sum + arr[i];
        }
        
        System.out.println("");
        System.out.println("The largest number is: "+largest);
        System.out.println("The smallest number is: "+smallest);
        
        avg = sum / 100;
        System.out.println("The average value is: "+avg);
    }
    
}

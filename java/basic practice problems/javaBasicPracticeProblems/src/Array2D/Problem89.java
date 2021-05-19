package Array2D;

import java.util.Random;
import java.util.Scanner;

public class Problem89
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        
        int range, num1, num2, start, end;
        
        float arr[][] = new float[5][3];
        
        System.out.print("Enter 1st number: ");
        num1 = scan.nextInt();
        System.out.print("Enter 2nd number: ");
        num2 = scan.nextInt();
        
        System.out.println("");
        
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
        
        range = end - start;
        
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 3; j++)
            {
               arr[i][j] = start + (rand.nextFloat() * range);
               System.out.print(arr[i][j]+" "); 
            }
            System.out.println("");
            
        }
        
        System.out.println("");
    }
    
}

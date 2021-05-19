package problems;

import java.util.Random;
import java.util.Scanner;

public class Problem84
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        
        float targetNum;
        float arr[] = new float[25];
        
        for(int i = 0; i < 25; i++)
        {
            arr[i] = rand.nextFloat();
            System.out.print(arr[i]+" ");
        }
        
        System.out.println("");
        System.out.print("Enter target value to search: ");
        targetNum = scan.nextInt();
        
        int findCounter = 0;
        
        for(int i = 0; i < 25; i++)
        {
            if(arr[i] == targetNum)
            {
               findCounter++;
            }
        }
        
        if(findCounter != 0)
        {
            int findArr[] = new int[findCounter];
            for(int i = 0; i < findCounter; i++)
            {
                findArr[i] = 0;
            }
            
            int j = 0;
            for(int i = 0; i < 25; i++)
            {
                if(arr[i] == targetNum)
                {
                    findArr[j] = i; 
                    j++;
                }
            }
            
            System.out.print("Found at indices: ");
            for(int i = 0; i < findCounter; i++)
            {
                System.out.print(findArr[i]+" ");
            }
            
            System.out.println("");
            System.out.print("Number of times found: "+findCounter);
        }
        else
        {
            System.out.println("Not found");
        }
        
        System.out.println("");
    }    
}

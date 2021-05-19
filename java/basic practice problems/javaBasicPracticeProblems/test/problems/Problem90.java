package problems;

import java.util.Random;
import java.util.Scanner;

public class Problem90
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        
        int oddCount = 0, evenCount = 0;
        
        
        int arr[][] = new int[5][5];
        
        System.out.println("Integer array: ");
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                arr[i][j] = rand.nextInt(10);
                System.out.print(arr[i][j]+" ");   
            }
            System.out.println("");
        }
        
        int oddArray[][] = new int[5][]; 
        int evenArray[][] = new int[5][];
        
        int k = 0;
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(arr[i][j] % 2 != 0)
                {
                    oddCount++;
                }
            }
            
            oddArray[k] = new int[oddCount];
            k++;
            oddCount = 0;
        }
        k = 0;
        
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(arr[i][j] % 2 == 0)
                {
                    evenCount++;
                }
            }
            
            evenArray[k] = new int[evenCount];
            k++;
            evenCount = 0;
        }
        
        k = 0;
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(arr[i][j] % 2 != 0)
                {
                    oddArray[i][k] = arr[i][j];
                    k++;
                }
            }    
        }
        
        k = 0;
        
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(arr[i][j] % 2 == 0)
                {
                    evenArray[i][k] = arr[i][j];
                    k++;
                }
            }    
        }
        
        System.out.println("");
        System.out.println("Odd array: ");
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < evenArray[i][j]; j++)
            {
                System.out.print(evenArray[i][j]+" ");
            }
            System.out.println("");
        }
        System.out.println("");
        System.out.println("Even array: ");
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < evenArray[i][j]; j++)
            {
                System.out.print(evenArray[i][j]+" ");
            }
            System.out.println("");
        }
        
        System.out.println("");
    }
    
}

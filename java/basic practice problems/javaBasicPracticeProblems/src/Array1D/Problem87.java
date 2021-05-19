package Array1D;

import java.util.Random;
import java.util.Scanner;

public class Problem87
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        
        int arrSize, oddCount = 0, evenCount = 0;
        System.out.print("Enter size of array: ");
        arrSize = scan.nextInt();
        
        int arr[] = new int[arrSize];
        
        System.out.println("Integer array: ");
        for(int i = 0; i < arrSize; i++)
        {
            arr[i] = rand.nextInt();
            System.out.print(arr[i]+" ");
        }
        
        for(int i = 0; i < arrSize; i++)
        {
            if(arr[i] % 2 != 0)
            {
                oddCount++;
            }
            else
            {
                evenCount++;
            }
        }
        
        int evenOddArray[] = new int[evenCount+oddCount];
        
        int j = 0;
        for(int i = 0; i < arrSize; i++)
        {
            if(arr[i] % 2 != 0)
            {
                evenOddArray[j] = arr[i];
                j++;
            }
        }

        for(int i = 0; i < arrSize; i++)
        {
            if(arr[i] % 2 == 0)
            {
                evenOddArray[j] = arr[i];
                j++;    
            }
            
        }
        
        System.out.println("");
       
        j = 0;
        System.out.println("evenOdd array: ");
        for(int i = 0; i < evenCount+oddCount; i++)
        {
            System.out.print(evenOddArray[i]+" ");
            arr[j] = evenOddArray[i];
            j++;
        }
        
        System.out.println("");
        
        System.out.println("Copied evenOdd array to integer array");
        System.out.println("Integer array: ");
        for(int i = 0; i < arrSize; i++)
        {
            System.out.print(arr[i]+" ");
        }
        
        System.out.println("");
    }

}

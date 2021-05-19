package Array1D;

import java.util.Random;
import java.util.Scanner;

public class Problem86
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
        
        int oddArray[] = new int[oddCount];
        int evenArray[] = new int[evenCount];
        
        int j = 0, k = 0;
        for(int i = 0; i < arrSize; i++)
        {
            if(arr[i] % 2 != 0)
            {
                oddArray[j] = arr[i];
                j++;
            }
            else
            {   
                evenArray[k] = arr[i];
                k++;;
            }
        }
        
        System.out.println("");
        System.out.println("Odd array: ");
        for(int i = 0; i < oddCount; i++)
        {
            System.out.print(oddArray[i]+" ");
        }
        System.out.println("");
        System.out.println("Even array: ");
        for(int i = 0; i < evenCount; i++)
        {
            System.out.print(evenArray[i]+" ");
        }
        
        System.out.println("");
    }
}

package Array1D;

import java.util.Random;
import java.util.Scanner;

public class Problem85
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        
        int swappingVariable;
        int arr[] = new int[100];
        
        System.out.println("Before sorting: ");
        for(int i = 0; i < 100; i++)
        {
            arr[i] = rand.nextInt();
            System.out.print(arr[i]+" ");
        }
        
        for(int i = 0; i < 100; i++)
        {
            for(int j = i + 1; j < 100; j++)
            {
                if(arr[i] < arr[j])
                {
                    swappingVariable = arr[i];
                    arr[i] = arr[j];
                    arr[j] = swappingVariable;
                }
            }
        }
        
        System.out.println("");
        System.out.println("After sorting: ");
        for(int i = 0; i < 100; i++)
        {
            System.out.print(arr[i]+" ");
        }
        
        System.out.println("");
    }
}

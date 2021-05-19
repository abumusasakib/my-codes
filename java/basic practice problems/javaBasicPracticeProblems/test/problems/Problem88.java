package problems;

import java.util.Random;
import java.util.Scanner;

public class Problem88
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        
        float targetNum, swappingVariable;
        float arr[] = new float[1000];
        
        for(int i = 0; i < 10; i++)
        {
            arr[i] = rand.nextFloat();
            System.out.print(arr[i]+" ");
        }
        
        for(int i = 0; i < 1000; i++)
        {
            for(int j = i + 1; j < 1000; j++)
            {
                if(arr[i] > arr[j])
                {
                    swappingVariable = arr[i];
                    arr[i] = arr[j];
                    arr[j] = swappingVariable;
                }
            }
        }
        
        System.out.println("");
        System.out.print("Enter target value to search: ");
        targetNum = scan.nextInt();
        
        int startPoint = 0, endPoint = 999;
        int midPoint = (startPoint + endPoint) / 2;
        
        while(true)
        {
            if(startPoint >= endPoint)
            {
                System.out.println("Not found");
                break;
            }
            if(arr[midPoint] == targetNum)
            {
                System.out.println("Found");
                break;
            }
            else if(arr[midPoint] < targetNum)
            {
                startPoint = midPoint + 1;
            }
            else
            {
                endPoint = midPoint - 1;
            }
        }
    }    
    
}

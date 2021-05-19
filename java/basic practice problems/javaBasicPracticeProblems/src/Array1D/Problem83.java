package Array1D;

import java.util.Random;
import java.util.Scanner;

public class Problem83
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        Random rand = new Random();
        
        int arrSize, range, num1, num2, start, end;
        System.out.print("Enter size of array: ");
        arrSize = scan.nextInt();
        int arr[] = new int[arrSize];
        
        System.out.print("Enter 1st number: ");
        num1 = scan.nextInt();
        System.out.print("Enter 2nd number: ");
        num2 = scan.nextInt();
        
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
        
        range = end - start + 1;
        
        for(int i = 0; i < arrSize; i++)
        {
            arr[i] = start + rand.nextInt(range);
            System.out.print(arr[i]+" ");
        }
        
        System.out.println("");
    }
}

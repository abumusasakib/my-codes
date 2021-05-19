package LoopLevel3;

import java.util.Scanner;

public class Problem80
{ 
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int inputs, oddCount = 0, evenCount = 0, posCount = 0, negCount = 0;
        
        for(int i = 1; i <= 25; i++)
        {
            System.out.print("Enter floating point numbers: ");
            inputs = scan.nextInt();
            
            if(inputs % 2 != 0)
            {
                oddCount++;
            }
            
            if(inputs % 2 == 0)
            {
                evenCount++;
            }
            
            if(inputs > 0)
            {
                posCount++;
            }
            
            if(inputs < 0)
            {
                negCount++;
            }
        }
        
        System.out.println("Number of odd: "+oddCount);
        System.out.println("Number of even: "+evenCount);
        System.out.println("Number of positive: "+posCount);
        System.out.println("Number of negative: "+negCount);
    }
}

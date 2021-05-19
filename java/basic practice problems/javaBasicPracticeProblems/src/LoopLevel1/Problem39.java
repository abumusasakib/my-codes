package LoopLevel1;

import java.util.Scanner;

public class Problem39 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        float input = 0.0f;
        
        while(input != 3.1416f)
        {
            System.out.print("Enter a floating point number: ");
            input = scan.nextFloat();
        }
    }        
}

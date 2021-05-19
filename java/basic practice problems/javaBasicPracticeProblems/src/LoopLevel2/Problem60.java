package LoopLevel2;

import java.util.Scanner;

public class Problem60
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int num, result = 1;
        System.out.print("Enter a number: ");
        num = scan.nextInt();
        
        for(int i = num; i >= 1; i--)
        {
            result = result * i;
        }
        
        System.out.println("The factorial is: "+result);
    }
}

package LoopLevel2;

import java.util.Scanner;

public class Problem51
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int number;
        System.out.print("Enter a number: ");
        number = scan.nextInt();
        
        int digitCounter = 0;
        
        while(number != 0)
        {
            number = number / 10;
            digitCounter++;
        }
        
        System.out.println("Number of digits: "+digitCounter);
    }
}

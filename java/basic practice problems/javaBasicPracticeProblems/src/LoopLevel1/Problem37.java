package LoopLevel1;

import java.util.Scanner;

public class Problem37 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int input = 0;
        
        //while(input != -1)
        //{
        //    System.out.print("Enter an integer: ");
        //    input = scan.nextInt();
        //}
        
        do
        {
            System.out.print("Enter an integer: ");
            input = scan.nextInt();
        }
        while(input != -1);
    }
}

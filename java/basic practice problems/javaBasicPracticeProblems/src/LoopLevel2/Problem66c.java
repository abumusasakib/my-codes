package LoopLevel2;

import java.util.Scanner;

public class Problem66c
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int n;
        System.out.print("Enter number of rows: ");
        n = scan.nextInt();
        
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(j >= n-i+1 && j <= n)
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println("");
        }
    }        
}

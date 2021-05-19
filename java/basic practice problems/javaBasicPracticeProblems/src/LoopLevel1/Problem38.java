package LoopLevel1;

import java.util.Scanner;

public class Problem38 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        char input = ' ';
        
        while(input != '.')
        {
            System.out.print("Enter a character: ");
            input = scan.next().charAt(0);
        }
    }    
}

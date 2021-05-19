package IfAndSwitch;

import java.util.Scanner;

public class Problem33
{
    public static void main(String[] args)
    {
        Scanner scan =  new Scanner(System.in);
        
        int year;
        System.out.print("Enter year: ");
        year = scan.nextInt();
        
        if(year % 4 != 0)
        {
            System.out.println("It is not a leap year");
        }
        else if(year % 100 != 0)
        {
            System.out.println("It is a leap year");
        }
        else if(year % 400 != 0)
        {
            System.out.println("It is not a leap year");
        }
        else
        {
            System.out.println("It is a leap year");
        }
    }
}

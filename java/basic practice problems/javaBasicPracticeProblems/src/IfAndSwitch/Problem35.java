package IfAndSwitch;

import java.util.Scanner;

public class Problem35 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        char c;
        System.out.print("Enter a character: ");
        c = scan.next().charAt(0);
        
        if(c >= 'A' && c <= 'Z')
        {
            System.out.println("Uppercase letter");
        }
        else if(c >= 'a' && c <= 'z')
        {
            System.out.println("Lowercase letter");
        }
        else if(c >= '0' && c <= '9')
        {
            System.out.println("Digit");
        }
        else
        {
            System.out.println("Symbol");
        }
        
    }
}

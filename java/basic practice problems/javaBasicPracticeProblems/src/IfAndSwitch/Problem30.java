package IfAndSwitch;

import java.util.Scanner;

public class Problem30 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int age;
        System.out.print("Enter age: ");
        age = scan.nextInt();
        
        if(age >= 0 && age < 13)
        {
            System.out.println("Younger than a teenager");
        }
        else if(age >= 13 && age <= 19)
        {
            System.out.println("Teenager");
        }
        else if(age > 19)
        {
            System.out.println("Older than a teenager");
        }
        else
        {
            System.out.println("Invalid, age cannot be negative");
        }
    }
}

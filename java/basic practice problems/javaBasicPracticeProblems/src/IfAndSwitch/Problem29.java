package IfAndSwitch;

import java.util.Scanner;

public class Problem29 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int examScore;
        System.out.print("Enter your exam score: ");
        examScore = scan.nextInt();
        
        if(examScore >= 85 && examScore <= 100)
        {
            System.out.println("A");
        }
        else if(examScore >= 80 && examScore < 85)
        {
            System.out.println("A-");
        }
        else if(examScore >= 75 && examScore < 80)
        {
            System.out.println("B+");
        }
        else if(examScore >= 65 && examScore < 70)
        {
            System.out.println("B-");
        }
        else if(examScore >= 60 && examScore < 65)
        {
            System.out.println("C+");
        }
        else if(examScore >= 55 && examScore < 60)
        {
            System.out.println("C");
        }
        else if(examScore >= 50 && examScore < 55)
        {
            System.out.println("C-");
        }
        else if(examScore >= 45 && examScore < 50)
        {
            System.out.println("D+");
        }
        else if(examScore >= 40 && examScore < 45)
        {
            System.out.println("D");
        }
        else if(examScore >= 0 && examScore < 40)
        {
            System.out.println("F");
        }
        else
        {
            System.out.println("Out of range");
        }
    }
}
